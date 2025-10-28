int __fastcall sub_1DF9C8(int a1)
{
  int v1; // r4
  int result; // r0
  int v3; // r1

  if ( a1 )
    return sub_1DFE94();
  if ( !((int (__fastcall *)(_DWORD))loc_162D8)(0) )
  {
    ((void (*)(void))loc_162D8)();
    goto LABEL_7;
  }
  v1 = v3;
  if ( sub_1DFE94() == -1 )
  {
LABEL_7:
    sub_92F8C(9, "Register %d is not available", v1);
    JUMPOUT(0x1DFA24);
  }
  return result;
}
