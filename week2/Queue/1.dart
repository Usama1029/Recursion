import 'dart:io';

main()
{
  print("Enter your name :");
  String? name = stdin.readLineSync()!;
  print("Enter your age :");
  String? stringage = stdin.readLineSync();
  int? age;
  if(stringage != null)
  {
    age = int.parse(stringage);
  }
  if(age != null )
  {
  int year = 100-age;
  print("$name, you have $year to be 100 year");

  }
 
}