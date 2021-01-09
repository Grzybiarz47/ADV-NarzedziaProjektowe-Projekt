pipeline {
  agent {
    dockerfile {
      filename 'Dockerfile'
      args '--publish 2115:1337'
    }

  }
  stages {
    stage('Test') {
      steps {
        sh '''cd app
g++ tests -lgtest -lgtest_main -lgmock -pthread -o tests
./tests'''
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