int __fastcall sub_1D48A4(int a1)
{
  char *v2; // r6
  void *v3; // r7
  int v4; // r5

  v2 = off_46DAB4;
  off_46DAB4 = "read-write";
  v3 = sub_92E50();
  v4 = (*(int (**)(void))(*(_DWORD *)a1 + 76))();
  sub_92E68((int)v3);
  off_46DAB4 = v2;
  return v4;
}
