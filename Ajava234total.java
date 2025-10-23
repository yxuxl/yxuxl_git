 === main 함수 안에서 ===
 1. 기본형 배열 생성
 int[] scores = new int[5]; [cite_start]// 0으로 5칸이 채워짐 [cite: 4333]
 scores[0] = 100; // 0번째 칸에 100 넣기

 2. 객체 배열 생성 (⭐중요⭐)
 Student[] sArr = new Student[3]; [cite_start]// [cite: 3339] 3칸짜리 *빈 진열대* 생성
 sArr[0] = new Student("김철수", 1); [cite_start]// 0번에 *진짜 붕어빵* 생성해서 넣기 [cite: 3354]
 sArr[1] = new Student("박영희", 2);
 sArr[2] = new Student("이민수", 3);

 3. 배열 순회 (for each) (4강) [cite: 594]
 for (Student s : sArr) {
     s.printInfo();
 }

 4. 문자열 쪼개기 (String.split) (3, 4강) [cite: 688]
 String line = "Tom gave up";
 String[] words = line.split(" "); // 공백 기준 "Tom", "gave", "up" 3개로 쪼개짐
 System.out.println(words[0]); // "Tom" 출력

5. 문자열 비교 (String.equals) (3, 4강) [cite: 97, 2867]
 String s1 = "hello";
 String s2 = scanner.next();
 if (s1.equals(s2)) { // == 쓰면 안 되고 .equals() 써야 함! [cite: 97]
     System.out.println("두 문자열이 같습니다.");
 }

 6. 문자열 자르기 (String.substring) (3강) [cite: 2872]
 String text = "Hello.world";
 text = text.substring(0, 5); // 0~4번째까지 자름 -> "Hello"
