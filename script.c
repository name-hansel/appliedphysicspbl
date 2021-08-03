#include<stdio.h>

#include<conio.h>

#include<setjmp.h>

#include<math.h>

jmp_buf z;
jmp_buf y;
jmp_buf un;
jmp_buf de;
jmp_buf trois;
jmp_buf quatre;
jmp_buf star;
double mod(double number);
double approx(double y);
void resolve();
void distance();
void max();
void wedgemax();
void wedgemin();
void bandwidth();
void anti();
void newmin();
void grating();
void newmax();
void min();
void newtonmax();
void newtonmin();
void thicc();
void high();
int main() {
  int a, b, c, d, e, f, g, q, s, j;

  //function jumping
  if (setjmp(star)) {
    goto starr;
  }
  if (setjmp(z))
    goto exit;
  else {
    if (setjmp(y)) {
      goto three;
    }
    if (setjmp(un)) {
      goto six;
    }
    if (setjmp(de)) {
      goto drei;
    }
    if (setjmp(trois)) {
      goto seven;
    }
    if (setjmp(quatre)) {
      goto brot;
    }
    drei: two: printf("Press 0 to exit\n");
    printf("Choose topic:\n");
    printf("1)Interference\n2)Diffraction\n3)Anti-reflection film\n4)Highly reflecting film\n5)Find diameter of a wire or foil\n");
    scanf("%d", & a);
    switch (a) {
    case 1: {

      zwei: one: printf("Press 0 to exit\n");

      printf("1)Thin film interference\n2)Wedge shaped\n3)Newton's Rings\n4)Go back\n");
      scanf("%d", & b);
      switch (b) {
      case 1: {

        eins: three: printf("Press 0 to exit\n");

        printf("1)Reflecting side\n2)Transmitting side\n3)Go back\n");
        scanf("%d", & c);
        switch (c) {
        case 1: {

          vier: four: printf("Press 0 to exit\n");
          printf("1)Maxima\n2)Minima\n3)Go back\n");
          scanf("%d", & d);
          switch (d) {
          case 1: {
            printf("2utcos0=(2n+1)l/2\n");
            max();
            printf("\n\n\n1)Go back 2)Main menu 3)Exit\n");
            scanf("%d", & j);

            switch (j) {
            case 1:
              goto three;
            case 2:
              goto two;
            case 3:
              goto exit;
            }
            break;
          }
          case 2: {

            printf("2utcos0=nl\n");
            min();
            printf("\n\n\n1)Go back 2)Main menu 3)Exit\n");
            scanf("%d", & j);

            switch (j) {
            case 1:
              goto three;
            case 2:
              goto two;
            case 3:
              goto exit;
            }
            break;
          }
          case 0: {

            goto exit;
          }
          case 3:

            goto eins;
          default:

            goto four;

          }
          break;
        }
        case 2:

        {

          five: printf("Press 0 to exit\n");
          printf("1)Maxima\n2)Minima\n3)Go back\n");
          scanf("%d", & e);
          switch (e) {
          case 1: {

            printf("2utcos0=nl\n");
            min();
            printf("\n\n\n1)Go back 2)Main menu 3)Exit\n");
            scanf("%d", & j);

            switch (j) {
            case 1:
              goto three;
            case 2:
              goto two;
            case 3:
              goto exit;
            }
            //min();
            break;
          }
          case 2: {

            printf("2utcos0=(2n+1)l/2\n");
            max();
            printf("\n\n\n1)Go back 2)Main menu 3)Exit\n");
            scanf("%d", & j);

            switch (j) {
            case 1:
              goto three;
            case 2:
              goto two;
            case 3:
              goto exit;
            }
            break;
          }
          case 0: {

            goto exit;
          }
          case 3:

            goto eins;
          default:

            goto five;
          }
          break;
        }
        case 0: {

          goto exit;
        }
        case 3:

          goto zwei;
        default:

          goto three;
        }
        break;

      }
      case 2: {
        //  clrscr();
        six: printf("Clear screen");
        printf("Press 0 to exit\n");
        printf("1)Thickness for Maxima\n2)Thickness for Minima\n3)Bandwidth\n4)Go back\n");
        scanf("%d", & f);
        switch (f) {
        case 1: {

          printf("t=(2n+1)l/4u\n");

          wedgemax();
          printf("\n\n\n1)Go back 2)Main menu 3)Exit\n");
          scanf("%d", & j);

          switch (j) {
          case 1:
            goto six;
          case 2:
            goto two;
          case 3:
            goto exit;
          }
          break;
        }
        case 2: {

          printf("t=nl/2u");
          wedgemin();
          printf("\n\n\n1)Go back 2)Main menu 3)Exit\n");
          scanf("%d", & j);

          switch (j) {
          case 1:
            goto six;
          case 2:
            goto two;
          case 3:
            goto exit;
          }
          break;
        }
        case 3: {

          printf("b=l/2ua\n");
          bandwidth();
          printf("\n\n\n1)Go back 2)Main menu 3)Exit\n");
          scanf("%d", & j);

          switch (j) {
          case 1:
            goto six;
          case 2:
            goto two;
          case 3:
            goto exit;
          }
          break;
        }
        case 0: {

          goto exit;
        }
        case 4:

          goto zwei;
        default:

          goto six;
        }
        break;
      }
      case 3: {

        backk: seven: printf("Clear screen");
        printf("Press 0 to exit\n");
        printf("1)Reflected 2)Transmitted 3)Distance between two rings\n4)Go back\n");
        scanf("%d", & g);
        switch (g) {
        case 1: {

          //printf("D^2=(2n+1)2RL/u");
          //newmax();
          //ref();
          starr: printf("Press 0 to exit\n");
          printf("1)Maxima 2)Minima 3)Go back\n");
          scanf("%d", & q);
          if (q == 1) {
            newtonmax();
            goto thee;
          } else if (q == 2) {
            newtonmin();
            goto thee;
          } else if (q == 0) {
            goto exit;
          } else
            goto backk;
          break;
          thee: printf("\n\n\n1)Go back 2)Main menu 3)Exit\n");
          scanf("%d", & j);

          switch (j) {
          case 1:
            goto seven;
          case 2:
            goto two;
          case 3:
            goto exit;
          }
        }
        case 2: {

          //printf("D^2=4RnL/u");
          //ewmin();
          //tran();
          printf("Press 0 to exit\n");
          printf("1)Maxima 2)Minima 3)Go back\n");
          scanf("%d", & q);
          if (q == 1)
            newtonmin();
          else if (q == 2)
            newtonmax();
          else if (q == 0)
            goto exit;
          else
            goto backk;

          printf("\n\n\n1)Go back 2)Main menu 3)Exit\n");
          scanf("%d", & j);

          switch (j) {
          case 1:
            goto seven;
          case 2:
            goto two;
          case 3:
            goto exit;
          }
          break;
        }
        case 3: {

          printf("Dn^2-Dm^2=(4RmL)/U");
          distance();
          printf("\n\n\n1)Go back 2)Main menu 3)Exit\n");
          scanf("%d", & j);

          switch (j) {
          case 1:
            goto seven;
          case 2:
            goto two;
          case 3:
            goto exit;
          }
          break;
        }
        case 0: {

          goto exit;
        }
        case 4:

          goto zwei;
        default:

          goto seven;
        }
        break;
      }
      case 0: {

        goto exit;
      }
      case 4:

        goto drei;
      default: {

        goto one;
      }
      }
      break;
    }
    case 2: {

      brot: printf("Press 0 to exit\n");
      printf("1)Diffraction grating 2)Resolving power 3)Dispersive power\n4)Go back\n");
      scanf("%d", & s);
      switch (s) {
      case 1: {

        printf("(a+b)sin0=nl\n");
        grating();
        printf("\n\n\n1)Go back 2)Main menu 3)Exit\n");
        scanf("%d", & j);

        switch (j) {
        case 1:
          goto brot;
        case 2:
          goto two;
        case 3:
          goto exit;
        }
        break;
      }
      case 2: {

        printf("L/DL = N*M\n");
        resolve();
        printf("\n\n\n1)Go back 2)Main menu 3)Exit\n");
        scanf("%d", & j);

        switch (j) {
        case 1:
          goto brot;
        case 2:
          goto two;
        case 3:
          goto exit;
        }
        break;
      }
      case 3: {

        grating();
        printf("\n\n\n1)Go back 2)Main menu 3)Exit\n");
        scanf("%d", & j);

        switch (j) {
        case 1:
          goto brot;
        case 2:
          goto two;
        case 3:
          goto exit;
        }
        break;
      }
      case 0: {

        goto exit;
      }
      case 4:

        goto drei;
      }
      break;
    }
    case 3: {

      printf("t=L/4u\n");
      anti();
      printf("\n\n1)Continue 2)Exit\n");
      scanf("%d", & j);

      switch (j) {
      case 1:
        goto two;
      case 2:
        goto exit;
      }
      break;
    }
    case 4: {

      printf("t=L/2u\n");
      high();
      printf("\n\n1)Continue 2)Exit\n");
      scanf("%d", & j);

      switch (j) {
      case 1:
        goto two;
      case 2:
        goto exit;
      }
      break;
    }
    case 5: {

      thicc();
      printf("\n\n1)Continue 2)Exit\n");
      scanf("%d", & j);

      switch (j) {
      case 1:
        goto two;
      case 2:
        goto exit;
      }
      break;
    }
    case 0: {

      goto exit;

    }
    default: {

      goto two;
    }
    }
  }
  exit: printf("EXIT");
  return 0;
}

//interference maxima
void max() {
  double t, l;
  double o, o1, u;
  int n;
  int a;
  one: printf("Press 0 to exit\n\n");
  printf("\nFind:\n");
  printf("1)Refrative index 2)Thickness 3)Angle 4)Order 5)Wavelength 6)Go back\n");
  scanf("%d", & a);
  switch (a) {
  case 1: {

    printf("Enter thickness in angstoms\n");
    scanf("%lf", & t);
    printf("Enter angle in degrees\n");
    scanf("%lf", & o);
    printf("Enter the order\n");
    scanf("%d", & n);
    printf("Enter the wavelength in Angstroms\n");
    scanf("%lf", & l);
    o1 = (o * 3.14) / 180;
    u = ((2 * n + 1) * l) / (4 * t * cos(o1));
    printf("The refractive index is %lf", u);
    break;
  }
  case 2: {

    printf("Enter the wavelength in angstrom\n");
    scanf("%lf", & l);
    printf("Enter the order\n");
    scanf("%lf", & n);
    printf("Enter the refractive index\n");
    scanf("%lf", & u);
    printf("Enter the angle in degrees\n");
    scanf("%lf", & o1);
    o = (o1 * 3.14) / 180;
    t = ((2 * n + 1) * l) / (4 * u * cos(o));
    printf("The thickness is %lf angstrom", t);
    break;
  }
  case 3: {

    printf("Enter the order\n");
    scanf("%lf", & n);
    printf("Enter the wavelength in angstroms\n");
    scanf("%lf", & l);
    printf("Enter the refractive index\n");
    scanf("%lf", & u);
    printf("Enter the thickness in angstrom\n");
    scanf("%lf", & t);
    o1 = ((2 * n + 1) * l) / (4 * u * t);
    o = (180 * acos(o1)) / 3.14;
    printf("The angle in degrees is %lf", o);
    break;
  }
  case 4: {

    printf("Enter the refractive index\n");
    scanf("%lf", & u);
    printf("Enter the thickness in angstrom\n");
    scanf("%lf", & t);
    printf("Enter the angle in degrees\n");
    scanf("%lf", & o1);
    printf("Enter the wavelength in angstrom\n");
    scanf("%lf", & l);
    o = (o1 * 3.14) / 180;
    n = (4 * u * t * cos(o)) / l;
    n = approx(n);
    printf("The order is %lf", 0.5 * (n - 1));
    break;
  }
  case 5: {

    printf("Enter the refractive index\n");
    scanf("%lf", & u);
    printf("Enter the thickness in angstrom\n");
    scanf("%lf", & t);
    printf("Enter the angle in degrees\n");
    scanf("%lf", & o1);
    printf("Enter the order\n");
    scanf("%lf", & n);
    o = (o1 * 3.14) / 180;
    l = (4 * u * t * cos(o)) / (2 * n + 1);
    printf("The wavelength in angstroms is %lf", l);
    break;

  }
  case 0: {

    longjmp(z, 1);
  }
  case 6:

    longjmp(y, 1);
  default:

    goto one;
  }
}

void wedgemax() {
  int a;
  double n, t, l, u;
  one: printf("Press 0 to exit\n\n");
  printf("Find\n");
  printf("1)Thickness 2)Wavelength 3)Order 4)Refractive index 5)Go back\n");
  scanf("%d", & a);
  switch (a) {

  case 1: {

    printf("Enter order\n");
    scanf("%lf", & n);
    printf("Enter wavelength in angstrom\n");
    scanf("%lf", & l);
    printf("Enter refractive index\n");
    scanf("%lf", & u);
    t = ((2 * n + 1) * l) / (4 * u);
    printf("The thickness in angstroms is %lf", t);
    break;
  }
  case 2: {

    printf("Enter order\n");
    scanf("%lf", & n);
    printf("Enter refractive index\n");
    scanf("%lf", & u);
    printf("Enter thickness in angstrom\n");
    scanf("%lf", & t);
    l = (4 * u * t) / (2 * n + 1);
    printf("The wavelength in angstroms is %lf", l);
    break;
  }
  case 3: //order problem in ceil
  {

    printf("Enter wavelength in angstroms\n");
    scanf("%lf", & l);
    printf("Enter refractive index\n");
    scanf("%lf", & u);
    printf("Enter thickness in angstroms\n");
    scanf("%lf", & t);
    n = 0.5 * (((4 * u * t) / l) - 1);
    n = approx(n);
    printf("The order is %lf", n);
    break;
  }
  case 4: {

    printf("Enter order\n");
    scanf("%lf", & n);
    printf("Enter wavelength in angstroms\n");
    scanf("%lf", & l);
    printf("Enter thickness in angstrom\n");
    scanf("%lf", & t);
    u = ((2 * n + 1) * l) / (4 * t);
    printf("The refractive index is %lf", u);
    break;
  }
  case 0: {

    longjmp(z, 1);
  }
  case 5:

    longjmp(un, 1);
  default:

    goto one;
  }
}

void wedgemin() {
  int a;
  double t, n, l, u;
  one: printf("Press 0 to exit\n\n");
  printf("Find\n");
  printf("1)Thickness 2)Order 3)Wavelength 4)Refractive Index 5)Go back\n");
  scanf("%d", & a);
  switch (a) {
  case 1: {

    printf("Enter order\n");
    scanf("%lf", & n);
    printf("Enter wavelength in angstrom\n");
    scanf("%lf", & l);
    printf("Enter refractive index\n");
    scanf("%lf", & u);
    t = (n * l) / (2 * u);
    printf("Thickness in angstrom is %lf", t);
    break;
  }
  case 2: {

    printf("Enter thickness\n");
    scanf("%lf", & t);
    printf("Enter wavelength in angstrom\n");
    scanf("%lf", & l);
    printf("Enter refractive index\n");
    scanf("%lf", & u);
    n = (2 * u * t) / l;
    n = approx(n);
    printf("The order is %lf", n);
    break;
  }
  case 3: {

    printf("Enter thickness in angstrom\n");
    scanf("%lf", & t);
    printf("Enter refractive index\n");
    scanf("%lf", & u);
    printf("Enter order\n");
    scanf("%lf", & n);
    l = (2 * u * t) / n;
    printf("The wavelength in angstrom is %lf", l);
    break;
  }
  case 4: {

    printf("Enter thickness in angstrom\n");
    scanf("%lf", & t);
    printf("Enter wavelength in angstrom\n");
    scanf("%lf", & l);
    printf("Enter order\n");
    scanf("%lf", & n);
    u = (n * l) / (2 * t);
    printf("The refractive index is %lf", u);
    break;
  }
  case 0: {

    longjmp(z, 1);
  }
  case 5:

    longjmp(un, 1);
  default:

    goto one;
  }
}

void bandwidth() {
  int a;
  double l, b, u, al;
  one: printf("Press 0 to exit\n\n");
  printf("Find\n");
  printf("1)Bandwidth 2)Wavelength 3)Refractive Index 4)Angle of the wedge 5)Go back\n");
  scanf("%d", & a);
  switch (a) {
  case 1: {

    printf("Enter the wavelength in angstrom\n");
    scanf("%lf", & l);
    printf("Enter the refractive index\n");
    scanf("%lf", & u);
    printf("Enter the angle of the wedge in radians\n");
    scanf("%lf", & al);
    b = l / (2 * u * al);
    printf("The bandwidth in mm is %lf", b * pow(10, -7));
    break;
  }
  case 2: {

    printf("Enter the bandwidth in mm\n");
    scanf("%lf", & b);
    printf("Enter the refractive index\n");
    scanf("%lf", & u);
    printf("Enter the angle of the wedge in radians\n");
    scanf("%lf", & al);
    l = 2 * b * u * al * pow(10, 7);
    printf("The wavelength in angstrom is %lf", l);
    break;
  }
  case 4: {

    printf("Enter the wavelength in angstrom\n");
    scanf("%lf", & l);
    printf("Enter the bandwidth in mm\n");
    scanf("%lf", & b);
    printf("Enter the refractive index\n");
    scanf("%lf", & u);
    al = l / (2 * u * b * pow(10, 7));
    printf("The angle of the wedge in radians is %lf", al);
    break;
  }
  case 3: {

    printf("Enter the wavelength in angstrom\n");
    scanf("%lf", & l);
    printf("Enter the bandwidth in mm\n");
    scanf("%lf", & b);
    printf("Enter angle of the wedge in radians\n");
    scanf("%lf", & al);
    u = l / (2 * b * al * pow(10, 7));
    printf("The refractive index is %lf", u);
    break;
  }
  case 0: {

    longjmp(z, 1);
  }
  case 5:

    longjmp(un, 1);
  default:

    goto one;
  }
}

void anti() {
  int a;
  double t, l, u;
  one: printf("Press 0 to exit\n\n");
  printf("Find\n");
  printf("1)Minimum thickness of the coating 2)Wavelength 3)Refractive index of film 4)Go back\n");
  scanf("%d", & a);
  switch (a) {
  case 1: {

    printf("Enter wavelength in angstrom\n");
    scanf("%lf", & l);
    printf("Enter the refractive index of the film\n");
    scanf("%lf", & u);
    t = l / (4 * u);
    printf("The minimum thickness of the film should be %lf angstrom", t);
    break;
  }
  case 2: {

    printf("Enter the refractive index of the film\n");
    scanf("%lf", & u);
    printf("Enter the thickness in angstrom\n");
    scanf("%lf", & t);
    l = 4 * u * t;
    printf("The wavelength in angstroms is %lf", l);
    break;
  }
  case 3: {

    printf("Enter the wavelength in angstrom\n");
    scanf("%lf", & l);
    printf("Enter the thickness of film in angstrom\n");
    scanf("%lf", & t);
    u = l / (4 * t);
    printf("The refractive index is %lf", u);
    break;
  }
  case 0: {

    longjmp(z, 1);
  }
  case 4:

    longjmp(de, 1);
  default:

    goto one;
  }
}

void min() {
  int a;
  double u, t, o1, o, n, l;
  one: printf("Press 0 to exit\n\n");
  printf("\nFind\n");
  printf("1)Refractive index 2)Thickness 3)Angle 4)Order 5)Wavelength 6)Go back\n");
  scanf("%d", & a);
  switch (a) {
  case 1: {

    printf("Enter the order\n");
    scanf("%lf", & n);
    printf("Enter the wavelength in angstrom\n");
    scanf("%lf", & l);
    printf("Enter the thickness in angstrom\n");
    scanf("%lf", & t);
    printf("Enter the angle in degrees\n");
    scanf("%lf", & o1);
    o = (o1 * 3.14) / 180;
    u = (n * l) / (2 * t * cos(o));
    printf("The refractive index is %lf", u);
    break;
  }
  case 2: {

    printf("Enter the order\n");
    scanf("%lf", & n);
    printf("Enter the wavelength in angstrom\n");
    scanf("%lf", & l);
    printf("Enter the refractive index\n");
    scanf("%lf", & u);
    printf("Enter the angle in degrees\n");
    scanf("%lf", & o1);
    o = (o1 * 3.14) / 180;
    t = (n * l) / (2 * u * cos(o));
    printf("The thickness in angstrom is %lf", t);
    break;
  }
  case 3: {

    printf("Enter the order\n");
    scanf("%lf", & n);
    printf("Enter the wavelength in angstrom\n");
    scanf("%lf", & l);
    printf("Enter the refractive index\n");
    scanf("%lf", & u);
    printf("Enter the thickness in angstrom\n");
    scanf("%lf", & t);
    o1 = (n * l) / (2 * u * t);
    o = (180 * acos(o1)) / 3.14;
    printf("The angle in degrees is %lf", o);
    break;
  }
  case 4: {

    printf("Enter refractive index\n");
    scanf("%lf", & u);
    printf("Enter thickness in angstrom\n");
    scanf("%lf", & t);
    printf("Enter angle in degrees\n");
    scanf("%lf", & o1);
    printf("Enter the wavelength in angstrom\n");
    scanf("%lf", & l);
    o = (o1 * 3.14) / 180;
    n = (2 * u * t * cos(o)) / l;
    n = approx(n);
    printf("The order is %lf", n);
    break;
  }
  case 5: {

    printf("Enter the refractive index\n");
    scanf("%lf", & u);
    printf("Enter the thickness in angstrom\n");
    scanf("%lf", & t);
    printf("Enter the angle in degrees\n");
    scanf("%lf", & o1);
    printf("Enter the order\n");
    scanf("%lf", & n);
    o = (o1 * 3.14) / 180;
    l = (2 * u * t * cos(o)) / n;
    printf("The wavelength in angstrom is %lf", l);
    break;
  }
  case 0: {

    longjmp(z, 1);
  }
  case 6:

    longjmp(y, 1);
  default:

    goto one;
  }
}

void high() {
  int a;
  double t, l, u;
  one: printf("Press 0 to exit\n\n");
  printf("Find\n");
  printf("1)Minimum thickness of the coating 2)Wavelength 3)Refractive index of film 4)Go back\n");
  scanf("%d", & a);
  switch (a) {
  case 1: {

    printf("Enter wavelength in angstrom\n");
    scanf("%lf", & l);
    printf("Enter the refractive index of the film\n");
    scanf("%lf", & u);
    t = l / (2 * u);
    printf("The minimum thickness of the film should be %lf angstrom", t);
    break;
  }
  case 2: {

    printf("Enter the refractive index of the film\n");
    scanf("%lf", & u);
    printf("Enter the thickness in angstrom\n");
    scanf("%lf", & t);
    l = 2 * u * t;
    printf("The wavelength in angstroms is %lf", l);
    break;
  }
  case 3: {

    printf("Enter the wavelength in angstrom\n");
    scanf("%lf", & l);
    printf("Enter the thickness of film in angstrom\n");
    scanf("%lf", & t);
    u = l / (2 * t);
    printf("The refractive index is %lf", u);
    break;
  }
  case 0: {

    longjmp(z, 1);
  }
  case 4:

    longjmp(de, 1);
  default:

    goto one;
  }
}

void newmax() {
  int a;
  double n, r, l, u, d;

  printf("Press 0 to exit, press 9 to go back or press any other key to continue\n\n");
  scanf("%d", & a);

  switch (a) {
  case 0: {

    longjmp(z, 1);
  }
  case 9: {

    longjmp(trois, 1);
  }
  default: {
    printf("To find diameter of ring\n");
    printf("Enter the order\n");
    scanf("%lf", & n);
    printf("Enter the radius of curvature of lens in cm\n");
    scanf("%lf", & r);
    printf("Enter the wavelength in angstrom\n");
    scanf("%lf", & l);
    printf("Enter the refractive index\n");
    scanf("%lf", & u);
    d = sqrt(((2 * n + 1) * (2 * r * l * pow(10, -8))) / u);
    printf("The diameter of ring is %lf cm  and the radius is %lf cm", d, d * 0.5);
  }
  }
}

void newmin() {
  int a;
  double n, r, l, u, d;

  printf("Press 0 to exit, press 9 to go back or press any other key to continue\n");
  scanf("%d", & a);
  switch (a) {
  case 0: {

    longjmp(z, 1);
  }
  default: {
    printf("To find diameter of ring\n");
    printf("Enter the order\n");
    scanf("%lf", & n);
    printf("Enter the radius of curvature of lens in cm\n");
    scanf("%lf", & r);
    printf("Enter the wavelength in angstrom\n");
    scanf("%lf", & l);
    printf("Enter the refractive index\n");
    scanf("%lf", & u);
    d = (4 * r * u * l * pow(10, -8)) / u;
    d = sqrt(d);
    printf("The diameter of ring is %lf cm", d);
    break;
  }
  case 9:

    longjmp(trois, 1);
  }
}

void distance() {
  int a;
  double d, d1, d2, r, m, l, u, x;

  one: printf("Press 0 to exit\n");
  printf("Find:\n");
  printf("1)Diameter of one of the rings 2)Radius of curvature of lens 3)Wavelength 4)Refractive index 5)Go back\n");
  scanf("%d", & a);
  switch (a) {
  case 1: {

    printf("Enter the radius of curvature in cm\n");
    scanf("%lf", & r);
    printf("Enter the difference in orders of the two rings\n");
    scanf("%lf", & m);
    printf("Enter the wavelength in angstrom\n");
    scanf("%lf", & l);
    printf("Enter the refractive index\n");
    scanf("%lf", & u);
    printf("Enter the known diameter of one of the rings\n");
    scanf("%lf", & d1);
    x = (4 * r * m * l * pow(10, -8)) / u;
    if ((d1 * d1) - x < 0) {
      d = sqrt(x + (d1 * d1));
      printf("The diameter is %lf cm", d);
    } else {
      d = sqrt((d1 * d1) - x);
      printf("The diameter is %lf cm", d);
    }
    break;
  }
  case 2: {

    printf("Enter the refrative index\n");
    scanf("%lf", & u);
    printf("Enter the larger diameter in cm\n");
    scanf("%lf", & d1);
    printf("Enter the smaller diameter in cm\n");
    scanf("%lf", & d2);
    printf("Enter the difference in orders\n");
    scanf("%lf", & m);
    printf("Enter the wavelength in angstrom\n");
    scanf("%lf", & l);
    d = (d1 * d1) - (d2 * d2);
    r = (u * d) / (4 * m * l * pow(10, -8));
    printf("The radius is %lf cm", r);
    break;
  }
  case 3: {

    printf("Enter the larger diameter in cm\n");
    scanf("%lf", & d1);
    printf("Enter the smaller diameter in cm\n");
    scanf("%lf", & d2);
    printf("Enter refractive index\n");
    scanf("%lf", & u);
    printf("Enter the radius of curvature in cm\n");
    scanf("%lf", & r);
    printf("Enter the difference in orders\n");
    scanf("%lf", & m);
    d = (d1 * d1) - (d2 * d2);
    l = (d * u) / (4 * r * m);
    printf("The wavelength in angstrom is %lf", l * pow(10, 8));
    break;
  }
  case 4: {

    printf("Enter the radius of curvature in cm\n");
    scanf("%lf", & r);
    printf("Enter the difference in orders\n");
    scanf("%lf", & m);
    printf("Enter the wavelength in angstrom\n");
    scanf("%lf", & l);
    printf("Enter the larger diameter in cm\n");
    scanf("%lf", & d1);
    printf("Enter the smaller diameter in cm\n");
    scanf("%lf", & d2);
    d = (d1 * d1) - (d2 * d2);
    u = (4 * r * m * l * pow(10, -8)) / d;
    printf("The refractive index is %lf", u);
    break;
  }
  case 0: {

    longjmp(z, 1);
  }
  case 5:

    longjmp(trois, 1);
  default:

    goto one;
  }
}

void grating() {
  int a, m1;
  double n, o, o1, m, l;
  one: printf("Press 0 to exit\n");
  printf("Find:\n");
  printf("1)Number of lines per cm 2)Angle of diffraction 3)Order 4)Wavelength 5)Go back\n");
  scanf("%d", & a);
  switch (a) {
  case 1: {

    printf("Enter the order\n");
    scanf("%lf", & n);
    printf("Enter the wavelength in angstrom\n");
    scanf("%lf", & l);
    printf("Enter the angle of diffraction in degrees\n");
    scanf("%lf", & o1);
    o = (3.1415 * o1) / 180;
    m = (n * l * pow(10, -8)) / sin(o);
    m1 = 1 / m;
    printf("The number of lines per cm is %d", m1);
    break;
  }
  case 2: {

    printf("Enter the order\n");
    scanf("%lf", & n);
    printf("Enter the wavelength in angstrom\n");
    scanf("%lf", & l);
    printf("Enter the number of lines per cm\n");
    scanf("%lf", & m);
    o1 = (n * l * pow(10, -8) * m);
    o = asin(o1);
    o = (180 * o) / 3.1415;
    printf("The angle of diffraction in degrees is %lf", o);
    break;
  }
  case 3: //approximation problem
  {

    printf("Enter the number of lines per cm\n");
    scanf("%lf", & m);
    printf("Enter the angle of diffraction in degrees\n");
    scanf("%lf", & o1);
    printf("Enter the wavelength in angstrom\n");
    scanf("%lf", & l);
    o = (3.14 * o1) / 180;
    n = sin(o) / (m * l * pow(10, -8));
    n = approx(n);
    printf("The order is %lf", n);
    break;
  }
  case 4: {

    printf("Enter the number of lines per cm\n");
    scanf("%lf", & m);
    printf("Enter the angle of diffraction in degrees\n");
    scanf("%lf", & o1);
    printf("Enter the order\n");
    scanf("%lf", & n);
    o = (3.1415 * o1) / 180;
    l = sin(o) / (m * n);
    printf("The wavelength in angstroms is %lf", l * pow(10, 8));
    break;
  }
  case 0: {

    longjmp(z, 1);
  }
  case 5:

    longjmp(quatre, 1);
  default:

    goto one;
  }
}

double approx(double y) {
  if (y - floor(y) >= 0.9)
    return ceil(y);
  else
    return floor(y);
}

void resolve() {
  int a, b;
  double n, m, l1, l2, r;
  printf("Press 0 to exit and 9 to go back\n\n");
  printf("1)Wavelength formula 2)Wavelengths not known\n");
  scanf("%d", & a);
  switch (a) {
  case 1: {

    printf("Find:\n1)Resolving power 2)Wavelength 3)Order 4)No. of lines per cm 5)Go back\n");
    scanf("%d", & b);
    switch (b) {
    case 1: {

      printf("Enter first wavelength\n");
      scanf("%lf", & l1);
      printf("Enter the second wavelength\n");
      scanf("%lf", & l2);
      r = (l1 + l2) / (2 * (l1 - l2));
      r = mod(r);
      printf("The resolving power is %lf", r);
      break;
    }
    case 2: {

      printf("Enter the known wavelength in angstrom\n");
      scanf("%lf", & l1);
      printf("Enter the order\n");
      scanf("%lf", & n);
      printf("Enter the number of lines per cm\n");
      scanf("%lf", & m);
      l2 = (l1 * (2 * n * m + 1)) / (2 * n * m - 1);
      printf("The second wavelength is %lf angstrom", l2);
      break;
    }
    case 3: {

      printf("Enter the first wavelength\n");
      scanf("%lf", & l1);
      printf("Enter the second wavelength\n");
      scanf("%lf", & l2);
      printf("Enter the number of lines per cm\n");
      scanf("%lf", & m);
      n = (l1 + l2) / (2 * m * (l1 - l2));
      n = mod(n);
      printf("The order is %lf", n);
      break;
    }
    case 4: {

      printf("Enter the first wavelength in angstrom\n");
      scanf("%lf", & l1);
      printf("Enter the second wavelength in angstrom\n");
      scanf("%lf", & l2);
      printf("Enter the order\n");
      scanf("%lf", & n);
      m = (l1 + l2) / 2;
      m = m / (n * (l1 - l2));
      m = m / 2;
      m = mod(m);
      printf("The number of lines per cm are %lf", m);
      break;

    }
    case 5: {

      longjmp(quatre, 1);
      break;
    }
    }
    break;
  }
  case 2: {

    printf("Find:\n1)Resolving power 2)Order 3)No. of lines per cm 4)Go back\n");
    scanf("%d", & b);
    switch (b) {
    case 1: {

      printf("Enter order\n");
      scanf("%lf", & n);
      printf("Enter number of lines per cm\n");
      scanf("%lf", & m);
      r = n * m;
      printf("The resolving power is %lf", r);

      break;
    }
    case 2: {

      printf("Enter resolving power\n");
      scanf("%lf", & r);
      printf("Enter number of lines per cm\n");
      scanf("%lf", & m);
      n = r / m;
      printf("The order is %lf", n);
      break;
    }
    case 3: {

      printf("Enter resolving power\n");
      scanf("%lf", & r);
      printf("Enter order\n");
      scanf("%lf", & n);
      m = r / n;
      printf("The number of lines per cm is %lf", & m);
      break;
    }
    case 4:

      longjmp(quatre, 1);
      break;
    }
    break;
  }
  case 9: {

    longjmp(quatre, 1);
  }
  case 0: {

    longjmp(z, 1);
  }
  }
}

double mod(double number) {
  if (number < 0)
    number = -number;
  return number;
}

void thicc() {
  double d, w, l, u, b;

  printf("D=(L*l)/(2*u*b)\n");
  printf("To find diameter of wire or foil,\n");
  printf("Enter wavelength in angstrom\n");
  scanf("%lf", & w);
  printf("Enter distance of wire or foil from the edge of the wedge in mm\n");
  scanf("%lf", & l);
  printf("Enter the refractive index\n");
  scanf("%lf", & u);
  printf("Enter bandwidth in cm\n");
  scanf("%lf", & b);
  d = (w * pow(10, -10) * l * pow(10, -3)) / (2 * u * b * pow(10, -2));
  d = d * pow(10, 6);
  printf("The diameter of wire or foil is %lf microns\n", d);
}

void newtonmax() {
  int a;
  double d, n1, r, l, u, n;

  printf("Press 0 to exit\n");
  printf("Find:\n1)Diameter 2)Radius of curvature 3)Wavelength 4)Refractive index 5)Order 6)Go back\n");
  scanf("%d", & a);
  switch (a) {
  case 1: {

    printf("Enter radius of curvature in cm\n");
    scanf("%lf", & r);
    printf("Enter wavelength in angstrom\n");
    scanf("%lf", & l);
    printf("Enter refractive index\n");
    scanf("%lf", & u);
    printf("Enter order\n");
    scanf("%lf", & n);
    n1 = (2 * n) + 1;
    d = (n1 * 2 * r * l * pow(10, -8)) / u;
    d = sqrt(d);
    //d=d*pow(10,-2);
    printf("The diameter of newton ring is %lf cm", d);
    break;
  }
  case 2: {

    printf("Enter diameter of newton ring in cm\n");
    scanf("%lf", & d);
    printf("Enter refractive index\n");
    scanf("%lf", & u);
    printf("Enter order\n");
    scanf("%lf", & n);
    printf("Enter wavelength in angstrom\n");
    scanf("%lf", & l);
    n = (2 * n) + 1;
    r = (d * d * u) / (n * 2 * l * pow(10, -8));
    printf("The radius of curvature is %lf cm", r);
    break;
  }
  case 3: {

    printf("Enter diameter in cm\n");
    scanf("%lf", & d);
    printf("Enter refractive index\n");
    scanf("%lf", & u);
    printf("Enter radius of curvature\n");
    scanf("%lf", & r);
    printf("Enter order\n");
    scanf("%lf", & n);
    n = (2 * n) + 1;
    l = (d * d * u) / (2 * r * n);
    printf("The wavelength is %lf angstrom", l * pow(10, 8));
    break;
  }
  case 4: {

    printf("Enter order\n");
    scanf("%lf", & n);
    printf("Enter radius of curvature in cm\n");
    scanf("%lf", & r);
    printf("Enter wavelength in angstrom\n");
    scanf("%lf", & l);
    printf("Enter diameter in cm\n");
    scanf("%lf", & d);
    n = (2 * n) + 1;
    u = (2 * n * r * l * pow(10, -8)) / (d * d);
    printf("The refractive index is %lf", u);
    break;
  }
  case 5: //actual order approx problem
  {

    printf("Enter diameter in cm\n");
    scanf("%lf", & d);
    printf("Enter refractive index\n");
    scanf("%lf", & u);
    printf("Enter radius of curvature in cm\n");
    scanf("%lf", & r);
    printf("Enter wavelength in angstrom\n");
    scanf("%lf", & l);
    n = (d * d * u) / (2 * r * l * pow(10, -8));
    //n=approx(n);
    n1 = (n - 1) / 2;
    printf("The order is %lf", n1);
    break;
  }
  case 0: {

    longjmp(z, 1);
  }
  case 6:

    longjmp(star, 1);
  }
}

void newtonmin() {
  int a;
  double d, n1, r, l, u, n;

  //printf("workingrn");
  printf("Press 0 to exit\n");
  printf("Find:\n1)Diameter 2)Radius of curvature 3)Wavelength 4)Refractive index 5)Order 6)Go back\n");
  scanf("%d", & a);
  switch (a) {
  case 1: {

    printf("Enter radius of curvature in cm\n");
    scanf("%lf", & r);
    printf("Enter wavelength in angstrom\n");
    scanf("%lf", & l);
    l = l * pow(10, -8);
    printf("Enter refractive index\n");
    scanf("%lf", & u);
    printf("Enter order\n");
    scanf("%lf", & n);
    d = (4 * r * n * l) / u;
    d = sqrt(d);
    printf("The diameter of newton ring is %lf cm", d);
    break;
  }
  case 2: {

    printf("Enter diameter of newton ring in cm\n");
    scanf("%lf", & d);
    printf("Enter refractive index\n");
    scanf("%lf", & u);
    printf("Enter order\n");
    scanf("%lf", & n);
    printf("Enter wavelength in angstrom\n");
    scanf("%lf", & l);
    l = l * pow(10, -8);
    //n=(2*n)+1;
    //r=(d*d*u)/(n*2*l*pow(10,-8));
    r = (d * d * u) / (4 * l * n);
    printf("The radius of curvature is %lf cm", r);
    break;
  }
  case 3: {

    printf("Enter diameter in cm\n");
    scanf("%lf", & d);
    printf("Enter refractive index\n");
    scanf("%lf", & u);
    printf("Enter radius of curvature\n");
    scanf("%lf", & r);
    printf("Enter order\n");
    scanf("%lf", & n);
    //n=(2*n)+1;
    //l=(d*d*u)/(2*r*n);
    l = (d * d * u) / (4 * r * n);
    printf("The wavelength is %lf angstrom", l * pow(10, 8));
    break;
  }
  case 4: {

    printf("Enter order\n");
    scanf("%lf", & n);
    printf("Enter radius of curvature in cm\n");
    scanf("%lf", & r);
    printf("Enter wavelength in angstrom\n");
    scanf("%lf", & l);
    l = l * pow(10, -8);
    printf("Enter diameter in cm\n");
    scanf("%lf", & d);
    //n=(2*n)+1;
    //u=(2*n*r*l*pow(10,-8))/(d*d);
    u = (4 * r * n * l) / (d * d);
    printf("The refractive index is %lf", u);
    break;
  }
  case 5: //actual order approx problem
  {

    printf("Enter diameter in cm\n");
    scanf("%lf", & d);
    printf("Enter refractive index\n");
    scanf("%lf", & u);
    printf("Enter radius of curvature in cm\n");
    scanf("%lf", & r);
    printf("Enter wavelength in angstrom\n");
    scanf("%lf", & l);
    l = l * pow(10, -8);
    n = (d * d * u) / (4 * r * l);
    //n=(d*d*u)/(2*r*l*pow(10,-8));
    //n=approx(n);
    //n1=(n-1)/2;
    n = approx(n);
    printf("The order is %lf", n);
    break;
  }
  case 0:
    longjmp(z, 1);
  case 6:
    longjmp(star, 1);
  }
}
