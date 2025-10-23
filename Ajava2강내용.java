import java.util.Scanner; [cite_start]// [cite: 3908]

// 시험 문제 메인 클래스 (이 파일 하나만 제출한다고 가정)
public class Exam {

    public static void main(String[] args) {
        // 1. Scanner 준비
        Scanner scanner = new Scanner(System.in); [cite_start]// [cite: 3951]

        // 2. 입력 받기 (예시)
        System.out.print("정수를 입력하세요: ");
        int num = scanner.nextInt(); [cite_start]// [cite: 3957]
        
        System.out.print("이름을 입력하세요: ");
        String name = scanner.next(); [cite_start]// [cite: 3965]

        // ※ 만약 nextInt() 다음에 nextLine()을 써야 한다면
        // scanner.nextLine(); // 엔터키 버그 방지용 코드 꼭 넣기!
        // String line = scanner.nextLine();

        // 3. 로직 처리 (아래 2~6번 내용 참고)
        
        // 4. 출력
        System.out.println("입력한 정수: " + num);
        System.out.printf("입력한 이름: %s\n", name); [cite_start]// [cite: 3881]

        // 5. Scanner 닫기 (좋은 습관)
        scanner.close(); 
    }
}
