// === main 함수 안에서 ===

 1. if-else if-else (조건 검사) [cite: 189]
 if (score >= 90) { grade = "A"; }
 else if (score >= 80) { grade = "B"; }
 else { grade = "C"; }

 2. switch (정확한 값 비교) [cite: 780-791, 865]
 switch (zone) {
     case "prime": price = 11000; break;
     case "standard": price = 10000; break;
     default: price = 9000; break;
 }

3. for (정해진 횟수 반복) [cite: 437, 457]
int sum = 0;
for (int i = 1; i <= 100; i++) {
    sum += i;
}

 4. while (조건 만족 시 계속 반복) [cite: 375]
 int num = scanner.nextInt();
 while (num < 100) {
     if (num == 0) {
         num = scanner.nextInt();
         continue; [cite_start]// [cite: 580] 0이면 출력 안 하고 다시 조건으로
     }
     System.out.println(num);
     if (num == 99) {
         break; [cite_start]// [cite: 507] 99면 반복문 탈출
     }
//     num = scanner.nextInt();
// }
