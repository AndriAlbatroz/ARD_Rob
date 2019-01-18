#include "HC_06mgm.h"

HC_06mgm::HC_06mgm(char delimeter = '?') {
    this->_Delimeter = delimeter;
}

void HC_06mgm::Connect() {
  Serial.begin(9600);
  this->Write("Connesso");
}

void HC_06mgm::Disconnect() {
  Serial.end();
}

void HC_06mgm::Clear() {

}

String HC_06mgm::ReadUntilDelimeter() {

} 

void HC_06mgm::Write(String str) {
  Serial.println(str);
}
