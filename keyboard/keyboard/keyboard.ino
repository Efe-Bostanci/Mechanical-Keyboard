#include <Keyboard.h>

#define Q 2
#define W 3
#define E 4
#define A 5
#define S 6
#define D 7
#define C 8
#define X 9
#define Space 10

//-----------kontrol-----------
bool w_basili = false;
bool a_basili = false;
bool s_basili = false;
bool d_basili = false;
bool q_basili = false;
bool e_basili = false;
bool c_basili = false;
bool x_basili = false;
bool Space_basili = false;

void setup()
{
  pinMode(Q, INPUT_PULLUP);
  pinMode(W, INPUT_PULLUP);
  pinMode(E, INPUT_PULLUP);
  pinMode(A, INPUT_PULLUP);
  pinMode(S, INPUT_PULLUP);
  pinMode(D, INPUT_PULLUP);
  pinMode(C, INPUT_PULLUP);
  pinMode(X, INPUT_PULLUP);
  pinMode(Space, INPUT_PULLUP);
}

void loop()
{
  //-------------------------------W-------------------------------
  if (!(digitalRead(W) || w_basili))
  {
    Keyboard.press('w');
    w_basili = true;
  }
  if (digitalRead(W) && w_basili)
  {
    Keyboard.release('w');
    w_basili = false;
  }

  //-------------------------------A-------------------------------
  if (!(digitalRead(A) || a_basili))
  {
    Keyboard.press('a');
    a_basili = true;
  }
  if (digitalRead(A) && a_basili)
  {
    Keyboard.release('a');
    a_basili = false;
  }

  //-------------------------------S-------------------------------
  if (!(digitalRead(S) || s_basili))
  {
    Keyboard.press('s');
    s_basili = true;
  }
  if (digitalRead(S) && s_basili)
  {
    Keyboard.release('s');
    s_basili = false;
  }

  //-------------------------------D-------------------------------
  if (!(digitalRead(D) || d_basili))
  {
    Keyboard.press('d');
    d_basili = true;
  }
  if (digitalRead(D) && d_basili)
  {
    Keyboard.release('d');
    d_basili = false;
  }

  //-------------------------------Q-------------------------------
  if (!(digitalRead(Q) || q_basili))
  {
    Keyboard.press('q');
    q_basili = true;
  }
  if (digitalRead(Q) && q_basili)
  {
    Keyboard.release('q');
    q_basili = false;
  }

  //-------------------------------E-------------------------------
  if (!(digitalRead(E) || e_basili))
  {
    Keyboard.press('e');
    e_basili = true;
  }
  if (digitalRead(E) && e_basili)
  {
    Keyboard.release('e');
    e_basili = false;
  }

  //-------------------------------C-------------------------------
  if (!(digitalRead(C) || c_basili))
  {
    Keyboard.press('c');
    c_basili = true;
  }
  if (digitalRead(C) && c_basili)
  {
    Keyboard.release('c');
    c_basili = false;
  }

  //-------------------------------X-------------------------------
  if (!(digitalRead(X) || x_basili))
  {
    Keyboard.press('x');
    x_basili = true;
  }
  if (digitalRead(X) && x_basili)
  {
    Keyboard.release('x');
    x_basili = false;
  }

  //-----------------------------Space-----------------------------
  if (!(digitalRead(Space) || Space_basili))
  {
    Keyboard.press(0x20);
    Space_basili = true;
    delay(10);
  }
  if (digitalRead(Space) && Space_basili)
  {
    Keyboard.release(0x20);
    Space_basili = false;
    delay(10);
  }
}
