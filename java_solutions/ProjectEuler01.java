public class ProjectEuler01 {
	public static void main(String args[])
	{
		int totalsum;
		totalsum = 0;
		for (int i = 0; i <1000; i++ ){
			if (i%3 == 0 || i%5 == 0)
			{totalsum += i;
			}
		}
		
		System.out.print("We find the answer to be ");
		System.out.println(totalsum);}
}

