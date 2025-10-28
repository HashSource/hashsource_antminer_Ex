int __fastcall sub_1F4D0(int a1, int *a2)
{
  _DWORD *v4; // r0

  if ( dword_487978 )
  {
    v4 = (_DWORD *)sub_242FF0();
    sub_2594D8(*v4, "displaced: copying unpredictable insn %.8lx\n", a1);
  }
  *a2 = a1;
  return 0;
}
