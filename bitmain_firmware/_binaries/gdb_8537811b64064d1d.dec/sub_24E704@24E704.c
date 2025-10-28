int __fastcall sub_24E704(int a1, int *a2)
{
  int (**v5)(); // [sp+4h] [bp-20h] BYREF
  _DWORD v6[2]; // [sp+8h] [bp-1Ch] BYREF
  char v7; // [sp+10h] [bp-14h] BYREF

  sub_256788(&v5);
  v6[0] = &v7;
  v5 = &off_3F294C;
  v6[1] = 0;
  v7 = 0;
  sub_154C9C(a2);
  sub_250434(a1 + 72, v6);
  return sub_2564A0(&v5);
}
