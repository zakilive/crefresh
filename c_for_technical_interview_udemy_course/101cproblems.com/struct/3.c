typedef struct tennisBall{
  char color[20];
  float weight;

}helo;

void printShow(struct tennisBall mp)
{
    printf("Color: %s\n",mp.color);
    printf("Weight: %.2f\n",mp.weight);
}

int main(){

struct tennisBall Ball;
struct tennisBall *myBall;
myBall=&Ball;
printf("Enter Weight: ");
scanf(" %f",&myBall->weight);

printf("Enter Color: ");
scanf(" %[^\n]",&myBall->color);

printShow(*myBall);
}
