int __fastcall sub_163EA0(int a1)
{
  _DWORD *v2; // r0

  if ( (unsigned int)dword_4877EC > 1 )
  {
    v2 = (_DWORD *)sub_242FF0(a1);
    sub_2594D8(*v2, "gdbarch_tdep called\n");
  }
  return *(_DWORD *)(a1 + 28);
}
