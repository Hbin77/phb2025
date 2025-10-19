// Dog 클래스 정의
class Dog {
    String name;

    // Dog가 짖는 행동을 하는 메서드
    void bark() {
        System.out.println(name + "가 멍멍! 짖습니다.");
    }
}

public class DogExample {
    public static void main(String[] args) {
        // Dog 클래스의 객체(인스턴스) 생성
        Dog myDog = new Dog();
        myDog.name = "해피"; // 객체의 속성(이름) 설정

        myDog.bark(); // 객체의 메서드 호출
    }
}