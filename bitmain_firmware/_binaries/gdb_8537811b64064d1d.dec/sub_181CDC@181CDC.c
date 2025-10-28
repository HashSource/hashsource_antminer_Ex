int __fastcall sub_181CDC(int a1)
{
  void (__fastcall *v2)(int *, int); // r6
  int v3; // r0
  int v5; // r0

  *(_BYTE *)(sub_1836B0(a1) + 140) = 0;
  if ( sub_FA64C(0) )
  {
    sub_FA48C();
    sub_215834();
  }
  else
  {
    v5 = ps_getpid_0((int)&dword_4878EC);
    sub_95294(v5, 1, a1);
  }
  v2 = (void (__fastcall *)(int *, int))off_4899C4;
  v3 = ps_getpid_0((int)&dword_4878EC);
  v2(&dword_4899A0, v3);
  return sub_17FFFC((int)&dword_4899A0, a1);
}
