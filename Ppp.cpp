#include <iostream>
#include <string.h>
#include <math.h>
#define PI 3.14
    using namespace std;
int main()
{

    string username;
    int password;

    int num, maths, name, choise;
    float a, b;
    cout << "Please Enter user name : ";
    cin >> username;
    cout << "Please Enter password : ";
    cin >> password;
    if (username == "pratik")
    {
        if (password == 2189)
        {

            cout << "You are Enter the screen"
                 << "\n"
                 << "Now,"
                 << "\n";
            cout << "\n";
            cout << "Enter Your choice"
                 << "\n";
            cout << "Press 1 for Maths calculation "
                 << "\n";
            cout << "Press 2 for Trigonometric calculation "
                 << "\n";
            cout << "Press 3 for Conversion"
                 << "\n";
            cout << "Press 4 for Table"
                 << "\n";
            cout << "Press 5 for Currency change"
                 << "\n";

            cout << "\n";
            cin >> choise;
            switch (choise)
            {
            case 1:

                cout << "Button 1 for Addition"
                     << "\n";
                cout << "Button 2 for subtraction"
                     << "\n";
                cout << "Button 3 for product"
                     << "\n";
                cout << "Button 4 for division"
                     << "\n";
                cout << "Button 5 To check number is Prime OR Not  "
                     << "\n";
                cout << "Button 6 To check Number is Even OR Odd "
                     << "\n";
                cout << "Button 7 To find Square root"
                     << "\n";
                cout << "Button 8 To find Power factor "
                     << "\n";
                cout << "Button 9 To find Remainder "
                     << "\n";
                cout << "\n";
                cin >> num;

                switch (num)
                {
                case 1:
                    cout << "Frist you can Enter the value of a =";
                    cin >> a;
                    cout << "Enter the value of b =";
                    cin >> b;
                    cout << "Addition of a and b = " << a + b;
                    break;
                case 2:
                    cout << "Frist you can Enter the value of a =";
                    cin >> a;
                    cout << " Enter the value of b =";
                    cin >> b;
                    cout << "subtraction of a and b = " << a - b;
                    break;
                case 3:
                    cout << "Frist you can Enter the value of a =";
                    cin >> a;
                    cout << "Enter the value of b =";
                    cin >> b;
                    cout << "Product of a and b = " << a * b;
                    break;
                case 4:
                    cout << "Frist you can Enter the value of a =";
                    cin >> a;
                    cout << " Enter the value of b =";
                    cin >> b;
                    cout << "division of a and b=" << a / b;
                    break;
                case 5:
                    int n, i;
                    cout << "Please Enter your value= ";
                    cin >> n;
                    for (i = 2; i < n; i++)
                    {
                        if (n % i == 0)
                        {
                            cout << n << " is Not Prime number";
                            break;
                        }
                    }
                    if (i == n)
                    {
                        cout << n << " is Prime number";
                    }
                    break;
                case 6:
                    int n1;
                    cout << "Enter your Number = ";
                    cin >> n1;
                    if (n1 % 2 == 0)
                    {
                        cout << n1 << " is Even Number";
                    }
                    else
                    {
                        cout << n1 << " is Odd Number";
                    }
                    break;
                case 7:

                    float n2, n3;
                    cout << "Please Enter the value = ";
                    cin >> n2;
                    n3 = sqrt(n2);
                    cout << "Square root of " << n2 << " = " << n3;
                    break;
                case 8:

                    int x, y, z;
                    cout << "Enter the Base Value =";
                    cin >> x;
                    cout << "Enter the power factor Value =";
                    cin >> y;
                    z = pow(x, y);
                    cout << "the power factor = " << z;
                    break;
                case 9:
                    int x1, y1, z1;
                    cout << "Enter the frist number =";
                    cin >> x1;
                    cout << "Enter the second number =";
                    cin >> y1;
                    z1 = fmod(x1, y1);
                    cout << "Remainder of given number = " << z1;
                    break;

                default:
                    cout << "Press the correct Button";
                    break;
                }
                break;
            case 2:
                cout << "Trigonometric calculation"
                     << "\n";
                cout << "Button 1 for sine value"
                     << "\n";
                cout << "Button 2 for cos value"
                     << "\n";
                cout << "Button 3 for tan value"
                     << "\n";
                cout << "Button 4 for cot value"
                     << "\n";
                cout << "Button 5 for sec value"
                     << "\n";
                cout << "Button 6 for cosec value"
                     << "\n";
                int tri;
                float a5, b5;
                cout << "\n";
                cin >> tri;

                switch (tri)
                {
                case 1:
                    cout << "Enter the value=";
                    cin >> a5;
                    b5 = sin(a5 * PI / 180);
                    printf("sin(%.f)=", a5);
                    printf("%.3f", b5);
                    break;
                case 2:
                    cout << "Enter the value=";
                    cin >> a5;
                    b5 = cos(a5 * PI / 180);
                    printf("cos(%.f)=", a5);
                    printf("%.3f", b5);
                    break;
                case 3:
                    cout << "Enter the value=";
                    cin >> a5;
                    b5 = tan(a5 * PI / 180);
                    printf("tan(%.f)=", a5);
                    printf("%.3f", b5);
                    break;
                case 4:
                    cout << "Enter the value=";
                    cin >> a5;
                    b5 = 1 / tan(a5 * PI / 180);
                    printf("cot(%.f)=", a5);
                    printf("%.3f", b5);
                    break;
                case 5:
                    cout << "Enter the value=";
                    cin >> a5;
                    b5 = 1 / cos(a5 * PI / 180);
                    printf("cos(%.f)=", a5);
                    printf("%.5f", b5);
                    break;
                case 6:
                    cout << "Enter the value=";
                    cin >> a5;
                    b5 = 1 / sin(a5 * PI / 180);
                    printf("cosec(%.f)=", a5);
                    printf("%.3f", b5);
                    break;
                default:
                    cout << "Press enter the correct button";
                    break;
                }

            case 3:
                int a12;

                cout << "Press 1 for  Length "
                     << "\n";
                cout << "Press 2 for Mass "
                     << "\n";
                cout << "Press 3 for Energy "
                     << "\n";
                cout << "Press 4 for Frequency "
                     << "\n";
                cout << "Press 5 for Temperature "
                     << "\n";
                cout << "Press 6 for Volume "
                     << "\n";
                cin >> a12;
                switch (a12)
                {
                case 1:
                    cout << "convert Meter to Centimeter"
                         << "\n";
                    float a13;
                    cout << "Enter the Meter value=";
                    cin >> a13;
                    a13 = (a13 * 100);

                    printf("Centimeter = %.2f", a13);

                    break;
                case 2:
                    cout << "convert Kilogram to Gram"
                         << "\n";
                    float a14;
                    cout << "Enter the Kilogram  value=";
                    cin >> a14;
                    a14 = (a14 * 1000);

                    printf("Gram=%.2f", a14);

                    break;

                case 3:
                    cout << "convert Joule to Kilocalories"
                         << "\n";
                    float a15;
                    cout << "Enter the Joule  value = ";
                    cin >> a15;
                    a15 = (a15 / 4184);

                    printf("Kilocalories = %.10f", a15);

                    break;
                case 4:
                    cout << "convert Hertz to Kilohertz"
                         << "\n";
                    float a16;
                    cout << "Enter the Hertz  value = ";
                    cin >> a16;
                    a16 = (a16 / 1000);

                    printf("Kilohertz = %.5f", a16);

                    break;
                case 5:
                    cout << "convert Celsius to Fahrenheit"
                         << "\n";
                    float a17;
                    cout << "Enter the Celsius value = ";
                    cin >> a17;
                    a17 = (a17 * 9 / 5) + 32;

                    printf("Fahrenheit = %f", a17);

                    break;
                case 6:
                    cout << "convert Liter to Mililiter"
                         << "\n";
                    float a18;
                    cout << "Enter the Liter value = ";
                    cin >> a18;
                    a18 = (a18 * 1000);

                    printf("Mililiter = %f", a18);

                    break;
                default:
                    cout << "Press enter the correct button";
                    break;
                }
                break;

            case 4:

                int a20;
                cout << "Press 1 button for single Table"
                     << "\n";
                cout << "Press 2  button for multiple table at a time"
                     << "\n";
                cin >> a20;
                switch (a20)
                {
                case 1:
                    int a19, i;
                    cout << "Enter the number = ";
                    cin >> a19;
                    for (i = 1; i <= 10; i++)
                    {
                        printf("%d*%d=%d", a19, i, a19 * i);
                        cout << "\n";
                    }
                    break;

                default:
                    cout << "Press enter the correct button";
                    break;

                case 2:
                    int a, b, num, end;
                    cout << "Please enter the starting number table : " << endl;
                    scanf("%d", &num);
                    cout << "Please enter the Ending number table : " << endl;
                    scanf("%d", &end);
                    for (b = num; b <= end; b++)
                    {

                        for (a = 1; a <= 10; a++)
                        {
                            printf("%d * %d=%d\n", b, a, a * b);
                        }
                        printf("===============\n");
                    }
                }
                break;

            case 5:
                float a;
                string name;

                cout << "Please enter the Ammount = ";
                cin >> a;
                cout << "Country currency list " << endl;
                cout << "dollar" << endl;
                cout << "korean-won" << endl;
                cout << "afghani" << endl;
                cout << "albanian-lek" << endl;
                cout << "algerian-dinar" << endl;
                cout << "angolan-kwanza" << endl;
                cout << "argentine-peso" << endl;
                cout << "armenian-dram" << endl;
                cout << "aruban-florin" << endl;
                cout << "australian-dollar" << endl;
                cout << "azerbaijani-manat" << endl;
                cout << "\n";
                cout << "bahamian-dollar" << endl;
                cout << "bahraini-dinar" << endl;
                cout << "bajan-dollar" << endl;
                cout << "bangladeshi-taka" << endl;
                cout << "belarusian-ruble" << endl;
                cout << "belize-dollar" << endl;
                cout << "bermudan-dollar" << endl;
                cout << "bhutan-currency" << endl;
                cout << "bolivian-boliviano" << endl;
                cout << "bosnia-herzegovina-convertible-mark" << endl;
                cout << "botswanan-pula" << endl;
                cout << "brazilian" << endl;
                cout << "brunei-dollar" << endl;
                cout << "bulgarian-lev" << endl;
                cout << "burundian-franc" << endl;
                cout << "\n";
                cout << "cfp-franc" << endl;
                cout << "cambodian-riel" << endl;
                cout << "canadian-dollar" << endl;
                cout << "cape-verdean-escudo" << endl;
                cout << "cayman-islands-dollar" << endl;
                cout << "central-african-cfa-franc" << endl;
                cout << "chilean-peso" << endl;
                cout << "chinese-yuan" << endl;
                cout << "colombian-peso" << endl;
                cout << "comorian-franc" << endl;
                cout << "congolese-franc" << endl;
                cout << "costa-rican-colon" << endl;
                cout << "croatian-kuna" << endl;
                cout << "cuban-peso" << endl;
                cout << "czench-koruna" << endl;
                cout << "\n";
                cout << "danish-krone" << endl;
                cout << "dijboutian-franc" << endl;
                cout << "dominician-peso" << endl;
                cout << "\n";
                cout << "east-caribbean-dollar" << endl;
                cout << "egyptian-pound" << endl;
                cout << "ethiopian-birr" << endl;
                cout << "eurro" << endl;
                cout << "\n";
                cout << "fijian-dollar" << endl;
                cout << "\n";
                cout << "gambian-dalasi" << endl;
                cout << "georigian-lari" << endl;
                cout << "ghanaian-cedi" << endl;
                cout << "guatemalan-quetzal" << endl;
                cout << "guinean-franc" << endl;
                cout << "guyanaese-dollar" << endl;
                cout << "\n";
                cout << "haitian-gourde" << endl;
                cout << "honduran-lempira" << endl;
                cout << "hong-kong-dollar" << endl;
                cout << "hungarian-forint" << endl;
                cout << "\n";
                cout << "icelandic-krona" << endl;
                cout << "indonesian-rupiah" << endl;
                cout << "iranian-rial" << endl;
                cout << "iraqi-dinar" << endl;
                cout << "israeli-new-shekel" << endl;
                cout << "\n";
                cout << "jamaican-dollar" << endl;
                cout << "japanese-yen" << endl;
                cout << "jordanian-dinar" << endl;
                cout << "\n";
                cout << "kazakhstani-tenge" << endl;
                cout << "kenyan-shiling" << endl;
                cout << "kuwaiti-dinar" << endl;
                cout << "kyrgystani-som" << endl;
                cout << "\n";
                cout << "laotian-kip" << endl;
                cout << "lebanese-pound" << endl;
                cout << "lesotho-loti" << endl;
                cout << "liberian-dollar" << endl;
                cout << "libyan-dinar" << endl;
                cout << "macanese-pataca" << endl;

                cout << "\n";

                cout << "Write a name of countries which convert indian rupee = ";
                cin >> name;

                if (name == "korean-won")
                {
                    float b;
                    b = (a * 16.27);

                    printf("%.3f indian rupee = %.2f south korean won \n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "dollar")
                {
                    float b;
                    b = (a * 0.013);

                    printf("%.2f indian rupee = %.2f United states Dollar\n ", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "afghani")
                {
                    float b;
                    b = (a * 1.14);

                    printf("%.2f indian rupee = %.2f Afghani \n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "albanian-lek")
                {
                    float b;
                    b = (a * 1.46);

                    printf("%.2f indian rupee = %.2f Albanian lek \n", a, b);
                    cout << "Thank You !!!!!";
                }
                else if (name == "algerian-dinar")
                {
                    float b;
                    b = (a * 1.88);

                    printf("%.2f indian rupee = %.2f Algerian-dinar \n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "angolan-kwanza")
                {
                    float b;
                    b = (a * 5.28);

                    printf("%.2f indian rupee = %.2f angolan-kwanza \n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "argentine-peso")
                {
                    float b;
                    b = (a * 1.50);

                    printf("%.2f indian rupee = %.2f argentine-peso \n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "armenian-dram")
                {
                    float b;
                    b = (a * 6.16);

                    printf("%.2f indian rupee = %.2f armenian-dram \n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "aruban-florin")
                {
                    float b;
                    b = (a * 0.025);

                    printf("%.2f indian rupee = %.2f aruban-florin \n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "australian-dollar")
                {
                    float b;
                    b = (a * 0.018);

                    printf("%.2f indian rupee = %.2f australian-dollar \n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "azerbaijani-manat")
                {
                    float b;
                    b = (a * 0.022);

                    printf("%.2f indian rupee = %.2f azerbaijani-manat \n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "bahamian-dollar")
                {
                    float b;
                    b = (a * 0.013);

                    printf("%.2f indian rupee = %.2f bahamian-dollar \n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "bahraini-dinar")
                {
                    float b;
                    b = (a * 0.0049);

                    printf("%.2f indian rupee = %.2f bahraini-dinar\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "bajan-dollar")
                {
                    float b;
                    b = (a * 0.026);

                    printf("%.2f indian rupee = %.2f bajan-dollar\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "bangladeshi-taka")
                {
                    float b;
                    b = (a * 1.13);

                    printf("%.2f indian rupee = %.2f bangladeshi-taka\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "belarusian-ruble")
                {
                    float b;
                    b = (a * 0.044);

                    printf("%.2f indian rupee = %.2f belarusian-ruble\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "belize-dollar")
                {
                    float b;
                    b = (a * 0.026);

                    printf("%.2f indian rupee = %.2f  belize-dollar\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "bermudan-dollar")
                {
                    float b;
                    b = (a * 0.013);

                    printf("%.2f indian rupee = %.2f  bermudan-dollar\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "bhutan-currencyr")
                {
                    float b;
                    b = (a * 1.00);

                    printf("%.2f indian rupee = %.2f  bhutan-currency\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "bolivian-boliviano")
                {
                    float b;
                    b = (a * 0.090);

                    printf("%.2f indian rupee = %.2f bolivian-boliviano\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "bosnia-herzegovina-convertible-mark")
                {
                    float b;
                    b = (a * 0.024);

                    printf("%.2f indian rupee = %.2f bosnia-herzegovina-convertible-mark\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "botswanan-pula")
                {
                    float b;
                    b = (a * 0.16);

                    printf("%.2f indian rupee = %.2f botswanan-pula\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "brunei-dollar")
                {
                    float b;
                    b = (a * 0.018);

                    printf("%.2f indian rupee = %.2f brunei-dollar\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "bulgarian-lev")
                {
                    float b;
                    b = (a * 0.024);

                    printf("%.2f indian rupee = %.2f bulgarian-lev\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "burundian-franc")
                {
                    float b;
                    b = (a * 26.92);

                    printf("%.2f indian rupee = %.2f burundian-franc\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "cfp-franc")
                {
                    float b;
                    b = (a * 1.45);

                    printf("%.2f indian rupee = %.2f cfp-franc\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "cambodian-riel")
                {
                    float b;
                    b = (a * 53.01);

                    printf("%.2f indian rupee = %.2f cambodian-riel\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "canadian-dollar")
                {
                    float b;
                    b = (a * 0.017);

                    printf("%.2f indian rupee = %.3f canadian-dollar\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "cape-verdean-escudo")
                {
                    float b;
                    b = (a * 1.34);

                    printf("%.2f indian rupee = %.3f cape-verdean-escudo\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "cayman-islands-dollar")
                {
                    float b;
                    b = (a * 0.011);

                    printf("%.2f indian rupee = %.3f cayman-islands-dollar\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "central-african-cfa-franc")
                {
                    float b;
                    b = (a * 7.95);

                    printf("%.2f indian rupee = %.2f central-african-cfa-franc\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "chilean-peso")
                {
                    float b;
                    b = (a * 10.81);

                    printf("%.2f indian rupee = %.2f chilean-peso\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "chinese-yuan")
                {
                    float b;
                    b = (a * 0.085);

                    printf("%.2f indian rupee = %.2f chinese-yuan\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "colombian-peso")
                {
                    float b;
                    b = (a * 49.48);

                    printf("%.2f indian rupee = %.2f colombian-peso\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "comorian-franc")
                {
                    float b;
                    b = (a * 5.97);

                    printf("%.2f indian rupee = %.2f comorian-franc\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "congolese-franc")
                {
                    float b;
                    b = (a * 26.31);

                    printf("%.2f indian rupee = %.2f congolese-franc\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "costa-rican-colon")
                {
                    float b;
                    b = (a * 8.62);

                    printf("%.2f indian rupee = %.2f costa-rican-colon\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "croatian-kuna")
                {
                    float b;
                    b = (a * 0.092);

                    printf("%.2f indian rupee = %.2f croatian-kuna\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "cuban-peso")
                {
                    float b;
                    b = (a * 0.31);

                    printf("%.1f indian rupee = %.2f cuban-peso\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "czench-koruna")
                {
                    float b;
                    b = (a * 0.29);

                    printf("%.1f indian rupee = %.2f czench-koruna\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "danish-krone")
                {
                    float b;
                    b = (a * 0.090);

                    printf("%.1f indian rupee = %.2f danish-krone\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "dijboutian-franc")
                {
                    float b;
                    b = (a * 2.33);

                    printf("%.1f indian rupee = %.2f dijboutian-franc\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "dominician-peso")
                {
                    float b;
                    b = (a * 0.72);

                    printf("%.1f indian rupee = %.2f dominician-peso\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "east-caribbean-dollar")
                {
                    float b;
                    b = (a * 0.035);

                    printf("%.1f indian rupee = %.2f east-caribbean-dollar\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "egyptian-pound")
                {
                    float b;
                    b = (a * 0.24);

                    printf("%.1f indian rupee = %.2f egyptian-pound\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "ethiopian-birr")
                {
                    float b;
                    b = (a * 0.68);

                    printf("%.1f indian rupee = %.2f ethiopian-birr\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "eurro")
                {
                    float b;
                    b = (a * 0.012);

                    printf("%.1f indian rupee = %.2f eurro\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "fijian-dollar")
                {
                    float b;
                    b = (a * 0.028);

                    printf("%.1f indian rupee = %.2f fijian-dollar\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "gambian-dalasi")
                {
                    float b;
                    b = (a * 0.70);

                    printf("%.2f indian rupee = %.2f gambian-dalasi\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "georigian-lari")
                {
                    float b;
                    b = (a * 0.040);

                    printf("%.2f indian rupee = %.2f georigian-lari\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "ghanaian-cedi")
                {
                    float b;
                    b = (a * 0.099);

                    printf("%.2f indian rupee = %.2f ghanaian-cedi\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "guatemalan-quetzal")
                {
                    float b;
                    b = (a * 0.10);

                    printf("%.2f indian rupee = %.2f guatemalan-quetzal\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "guinean-franc")
                {
                    float b;
                    b = (a * 116.55);

                    printf("%.2f indian rupee = %.2f guinean-franc\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "guyanaese-dollar")
                {
                    float b;
                    b = (a * 2.74);

                    printf("%.2f indian rupee = %.2f guyanaese-dollar\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "haitian-gourde")
                {
                    float b;
                    b = (a * 1.43);

                    printf("%.2f indian rupee = %.2f haitian-gourde\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "honduran-lempira")
                {
                    float b;
                    b = (a * 0.32);

                    printf("%.2f indian rupee = %.2f honduran-lempira\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "hong-kong-dollar")
                {
                    float b;
                    b = (a * 0.10);

                    printf("%.2f indian rupee = %.2f hong-kong-dollar\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "hungarian-forint")
                {
                    float b;
                    b = (a * 4.50);

                    printf("%.2f indian rupee = %.2f hungarian-forint\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "icelandic-krona")
                {
                    float b;
                    b = (a * 1.69);

                    printf("%.2f indian rupee = %.2f icelandic-krona\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "indonesian-rupiah")
                {
                    float b;
                    b = (a * 189.21);

                    printf("%.2f indian rupee = %.2f indonesian-rupiah\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "iranian-rial")
                {
                    float b;
                    b = (a * 553.77);

                    printf("%.2f indian rupee = %.2f iranian-rial\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "iraqi-dinar")
                {
                    float b;
                    b = (a * 19.14);

                    printf("%.2f indian rupee = %.2f iraqi-dinar\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "israeli-new-shekel")
                {
                    float b;
                    b = (a * 0.043);

                    printf("%.2f indian rupee = %.2f israeli-new-shekel\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "jamaican-dollar")
                {
                    float b;
                    b = (a * 2.03);

                    printf("%.2f indian rupee = %.2f jamaican-dollar\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "japanese-yen")
                {
                    float b;
                    b = (a * 1.68);

                    printf("%.2f indian rupee = %.2f japanese-yen\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "jordanian-dinar")
                {
                    float b;
                    b = (a * 0.0093);

                    printf("%.2f indian rupee = %.2f jordanian-dinar\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "kazakhstani-tenge")
                {
                    float b;
                    b = (a * 5.82);

                    printf("%.2f indian rupee = %.2f kazakhstani-tenge\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "kenyan-shiling")
                {
                    float b;
                    b = (a * 1.52);

                    printf("%.2f indian rupee = %.2f kenyan-shiling\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "kuwaiti-dinar")
                {
                    float b;
                    b = (a * 0.0040);

                    printf("%.2f indian rupee = %.2f kuwaiti-dinar\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "kyrgystani-som")
                {
                    float b;
                    b = (a * 1.06);

                    printf("%.2f indian rupee = %.2f kyrgystani-som\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "laotian-kip")
                {
                    float b;
                    b = (a * 157.24);

                    printf("%.2f indian rupee = %.2f laotian-kip\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "lebanese-pound")
                {
                    float b;
                    b = (a * 19.83);

                    printf("%.2f indian rupee = %.2f lebanese-pound\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "lesotho-loti")
                {
                    float b;
                    b = (a * 0.20);

                    printf("%.2f indian rupee = %.2f lesotho-loti\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "liberian-dollar")
                {
                    float b;
                    b = (a * 1.98);

                    printf("%.2f indian rupee = %.2f liberian-dollar\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "libyan-dinar")
                {
                    float b;
                    b = (a * 0.062);

                    printf("%.2f indian rupee = %.2f libyan-dinar\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else if (name == "libyan-dinar")
                {
                    float b;
                    b = (a * 0.062);

                    printf("%.2f indian rupee = %.2f libyan-dinar\n", a, b);
                    cout << "Thank You !!!!!";
                }

                else
                {
                    cout << "Please Enter the correct name of Countries";
                }
            }
        }
        else
        {
            cout << "Invalide password " << endl;
        }
    }
    else
    {
        cout << "Invalid User name ";
    }

    return 0;
}
