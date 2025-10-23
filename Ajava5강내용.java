// Exam.java 파일 안에 main 메소드 *밖*에 추가
// (또는 Calculator 같은 별도 클래스 안에 넣기)

[cite_start]// 1. 메소드 오버로딩 (이름은 같고, 매개변수가 다름) [cite: 1820, 1904, 1905]
public int add(int a, int b) {
    return a + b;
}

public double add(double a, double b) {
    return a + b;
}

[cite_start]// 2. 재귀 함수 (종료 조건이 중요!) [cite: 1927, 2064]
public long factorial(int n) {
    [cite_start]if (n == 1) { // 1. 종료 조건 (Base Case) [cite: 2102]
        return 1;
    } else { // 2. 재귀 호출 (Recursive Call)
        return n * factorial(n - 1); [cite_start]// [cite: 2103]
    }
}

[cite_start]// 3. 배열을 매개변수로 받기 (Call by Ref. 원본 바뀜) [cite: 1632]
public void changeArray(int[] arr) {
    arr[0] = 999; // 함수 밖의 원본 배열도 바뀜!
}

[cite_start]// 4. 기본형을 매개변수로 받기 (Call by Val. 원본 안 바뀜) [cite: 1590-1599]
public void changeInt(int num) {
    num = 999; // 함수 밖의 원본 num은 안 바뀜!
}
