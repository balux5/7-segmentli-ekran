#define A  1//1
#define B  2//6
#define C  3//4
#define D  4//2
#define E  5//1
#define F  6//9
#define G  7//10
#define DP 8//5
int digits[10][7] = {
  {1, 1, 1, 1, 1, 1, 0},//0
  {0, 1, 1, 0, 0, 0, 0},//1
  {1, 1, 0, 1, 1, 0, 1},//2
  {0, 1, 1, 1, 0, 0, 1},//3
  {0, 1, 1, 0, 0, 1, 1},//4
  {1, 0, 1, 1, 0, 1, 1},//5
  {1, 0, 1, 1, 1, 1, 1},//6
  {1, 1, 1, 0, 0, 0, 0},//7
  {1, 1, 1, 1, 1, 1, 1},//8
  {1, 1, 1, 1, 0, 1, 1},//9
};
void displayNumber(int number) {
  digitalWrite(A, digits[number][0]);
  digitalWrite(B, digits[number][1]);
  digitalWrite(C, digits[number][2]);
  digitalWrite(D, digits[number][3]);
  digitalWrite(E, digits[number][4]);
  digitalWrite(F, digits[number][5]);
  digitalWrite(G, digits[number][6]);
}
void setup() {
  Serial.begin(9600);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  int segPins[] = {A, B, C, D, E, F, G};

}
void loop() {
  for (int i = 0; i < 10; i++) {
    displayNumber(i);
    delay(1000);
  }
}
