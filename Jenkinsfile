pipeline {
  agent {
    dockerfile {
      filename 'Dockerfile'
    }

  }
  stages {
    stage('Test') {
      steps {
        sh '''cd app
g++ tests.cpp -o tests
./tests
'''
      }
    }

    stage('Deliver') {
      steps {
        sh '''cd app
g++ main.cpp -o main
./main'''
      }
    }

  }
}