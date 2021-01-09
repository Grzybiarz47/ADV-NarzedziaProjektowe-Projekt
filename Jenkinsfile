pipeline {
  agent any
  stages {
    stage('Build') {
      steps {
        echo 'Building image'
        script {
          docker.build("${imageName}")
        }

      }
    }

    stage('Test') {
      agent {
        docker {
          image "${imageName}"
        }

      }
      steps {
        sh '''cd app
g++ tests.cpp -o tests
./tests
        '''
      }
    }

    stage('Deliver') {
      agent {
        docker {
          image "${imageName}"
        }

      }
      steps {
        sh '''cd app
g++ main.cpp -o main
./main
        '''
      }
    }

    stage('Deploy') {
      agent any
      steps {
        script {
          docker.withRegistry('', "${registryCredential}"){
            imageToDeploy = docker.image("${imageName}")
            imageToDeploy.push()
            echo "Image pushed to Dockerhub"
          }
        }

      }
    }

    stage('Cleaning') {
      steps {
        sh 'docker image prune'
      }
    }

  }
  environment {
    registry = 'grzybiarz47/app'
    registryCredential = 'dockerhub'
    imageName = "${registry}:${env.BUILD_ID}"
  }
}