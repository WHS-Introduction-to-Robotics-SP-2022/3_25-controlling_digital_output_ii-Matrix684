Re:
/*

*/

void setup() {
  pinMode(3, OUTPUT);
  pinMode(10, OUTPUT);
  digitalWrite(3, HIGH);
  delay(500);
  digitalWrite(3, LOW);
  delay(500);
  digitalWrite(3, HIGH);
  delay(500);
  digitalWrite(3, LOW);
  delay(1000);
  digitalWrite(10, HIGH);
  delay(250);
  digitalWrite(10, LOW);
  delay(1000);
  digitalWrite(10, HIGH);
  delay(250);
  digitalWrite(10, LOW);
  delay(1000);
  digitalWrite(10, HIGH);
  delay(250);
  digitalWrite(10, LOW);

  delay(2000);
}

void loop() {
  digitalWrite(3, HIGH);
  digitalWrite(10, HIGH);
  delay(500);
  digitalWrite(3, LOW);
  digitalWrite(10, LOW);
  delay(200);
}

On Thu, Feb 17, 2022 at 5:53 PM <9708339011@mms.att.net> wrote:

>
