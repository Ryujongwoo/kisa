import java.util.Scanner;

public class WeekDayTest {

	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.print("요일을 계산할 날짜를 입력하세요: ");
		int year = scanner.nextInt();
		int month = scanner.nextInt();
		int day = scanner.nextInt();
		
//		서기 1년 1월 1일 부터 입력한 날짜까지 몇일째 날인가를 계산한다. => 7로 나눈 나머지를 계산한다.
//		7로 나눈 나머지가 0이면 일요일, 1이면 월요일, ..., 5이면 금요일, 6이면 토요일
		/*
		int sum = (year - 1) * 365;
		for (int i=1; i<year; i++) {
			if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0) {
				sum++;
			}
		}
		*/
		int sum = (year - 1) * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;
		
//		전년도 12월 31일까지 지난 날짜에 전달까지 지난 날짜를 더한다.
		/*
		for (int i=1; i<month; i++) {
			switch (i) {
				case 2: // 2월
					sum += year % 4 == 0 && year % 100 != 0 || year % 400 == 0 ? 29 : 28;
					break;
				case 4: case 6: case 9: case 11: // 짧은달
					sum += 30;
					break;
//				case 1: case 3: case 5: case 7: case 8: case 10: case 12: // 긴달
				default: // 긴달
					sum += 31;
					break;
			}
		}
		*/
//		12달의 마지막 날짜를 기억하는 배열을 만든다.
		int[] m = {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//		2월의 날짜를 확정한다.
		m[1] = year % 4 == 0 && year % 100 != 0 || year % 400 == 0 ? 29 : 28;
		for (int i=1; i<month; i++) {
			sum += m[i - 1];
		}
		
//		전년도 까지 지난 날짜에 일을 더한다.
		sum += day;
		System.out.println(sum % 7);
		
		String[] week = {"일", "월", "화", "수", "목", "금", "토"};
		System.out.println(week[sum % 7] + "요일");
		
	}
	
}




