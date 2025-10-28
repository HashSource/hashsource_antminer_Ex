int sub_244628()
{
  int v1; // r4
  int (**v2)(); // [sp+4h] [bp-1Ch] BYREF
  char *v3; // [sp+8h] [bp-18h]
  int v4; // [sp+Ch] [bp-14h]
  char v5; // [sp+10h] [bp-10h] BYREF

  if ( !sub_183DC4() )
    return 1;
  sub_256788(&v2);
  v2 = &off_3F294C;
  v3 = &v5;
  v4 = 0;
  v5 = 0;
  sub_25650C(&v2, "A debugging session is active.\n\n", 32);
  sub_183B60((int (__fastcall *)(int, int))sub_242A7C, (int)&v2);
  sub_25650C(&v2, "\nQuit anyway? ", 14);
  v1 = sub_25A40C("%s", v3);
  sub_2564A0(&v2);
  return v1;
}
