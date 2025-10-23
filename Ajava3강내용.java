// Exam.java 파일의 Exam 클래스 *아래쪽*에 추가로 정의
class Student {
    // 1. 멤버 변수 (속성)
    String name;
    int studentId;

    [cite_start]// 2. 생성자 (붕어빵 굽기) - 객체 생성 시 자동 호출 [cite: 3127, 3132]
    public Student(String name, int id) {
        this.name = name; [cite_start]// 'this'로 멤버 변수와 매개변수 구분 [cite: 3202]
        this.studentId = id;
    }
    
    // 3. 메소드 (기능)
    public void printInfo() {
        System.out.println("이름: " + this.name + ", 학번: " + this.studentId);
    }
    
    // 4. 값을 바꾸는 메소드 (Setter)
    public void setName(String name) {
        this.name = name;
    }
    
    // 5. 값을 가져오는 메소드 (Getter)
    public String getName() {
        return this.name;
    }
}

// === main 함수 안에서 이렇게 사용 ===
// Student s1 = new Student("김철수", 2023001); [cite_start]// [cite: 2377]
// s1.printInfo(); [cite_start]// [cite: 2378, 2679]
// s1.setName("박영희");
// System.out.println(s1.getName());
