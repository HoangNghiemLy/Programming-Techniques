#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  printf("Nhap so luong van dong vien: ");
  scanf("%d", &n);

  float* A = (float*)malloc(n * sizeof(float)); // cấp phát vùng nhớ động cho con trỏ A

  for (int i = 0; i < n; i++) {
    float kq;
    do {
      printf("Nhap ket qua thi dau cua van dong vien thu %d: ", i + 1);
      scanf("%f", &kq);
    } while (kq < 0 || kq > 10); // kiểm tra tính hợp lệ của dữ liệu

    *(A + i) = kq; // lưu kết quả thi đấu vào vùng nhớ do con trỏ A trỏ tới
  }

  // in ra kết quả thi đấu của vận động viên đạt huy chương vàng, bạc và đồng
  for (int i = 0; i < n; i++) {
    if (*(A + i) >= 9.0) {
      printf("Van dong vien thu %d dat Huy chuong Vang\n", i + 1);
    } else if (*(A + i) >= 7.0) {
      printf("Van dong vien thu %d dat Huy chuong Bac\n", i + 1);
    } else if (*(A + i) >= 5.0) {
      printf("Van dong vien thu %d dat Huy chuong Dong\n", i + 1);
    }
  }

  free(A); // giải phóng vùng nhớ đã được cấp phát động
  return 0;
}
