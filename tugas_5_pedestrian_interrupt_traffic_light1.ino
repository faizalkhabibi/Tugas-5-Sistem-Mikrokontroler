// Definisi Pin
const int mobilMerah = 13;
const int mobilKuning = 12;
const int mobilHijau = 11;
const int orangMerah = 10;
const int orangHijau = 9;
const int tombol = 2;

void setup() {
  pinMode(mobilMerah, OUTPUT);
  pinMode(mobilKuning, OUTPUT);
  pinMode(mobilHijau, OUTPUT);
  pinMode(orangMerah, OUTPUT);
  pinMode(orangHijau, OUTPUT);
  pinMode(tombol, INPUT_PULLUP);

  // Kondisi Awal
  digitalWrite(mobilHijau, HIGH);
  digitalWrite(orangMerah, HIGH);
}

void loop() {
  // Mengecek apakah tombol ditekan (Logika LOW karena INPUT_PULLUP)
  if (digitalRead(tombol) == LOW) {
    delay(200); // Debounce
    siklusMenyeberang();
  }
}

void siklusMenyeberang() {
  // 1. Transisi Kendaraan (Hijau ke Kuning)
  digitalWrite(mobilHijau, LOW);
  digitalWrite(mobilKuning, HIGH);
  delay(2000);

  // 2. Kendaraan Berhenti (Kuning ke Merah)
  digitalWrite(mobilKuning, LOW);
  digitalWrite(mobilMerah, HIGH);
  delay(1000);

  // 3. Pedestrian Menyeberang (Hijau)
  digitalWrite(orangMerah, LOW);
  digitalWrite(orangHijau, HIGH);
  delay(5000); 

  // 4. Selesai Menyeberang (Kembali Merah)
  digitalWrite(orangHijau, LOW);
  digitalWrite(orangMerah, HIGH);
  delay(1000);

  // 5. Transisi Kendaraan Kembali ke Hijau (Kuning)
  digitalWrite(mobilKuning, HIGH);
  delay(2000);
  digitalWrite(mobilKuning, LOW);
  digitalWrite(mobilMerah, LOW);
  digitalWrite(mobilHijau, HIGH);
}