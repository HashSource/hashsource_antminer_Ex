int __fastcall sub_1E33B8(int a1)
{
  int v1; // r0
  _DWORD *v2; // r4
  int result; // r0

  v1 = sub_16F67C(a1);
  ((void (__fastcall *)(int))loc_1E2798)(v1);
  v2 = (_DWORD *)dword_488C94;
  result = sub_1580E8();
  if ( result )
  {
    if ( v2[2] )
      return sub_258B94();
    if ( v2[13] )
    {
      result = sub_25A40C("The target is not responding to GDB commands.\nStop debugging it? ");
      if ( !result )
        return result;
      sub_231E64(2);
      sub_92F8C(12, "Disconnected from target.");
      return sub_231F34(qword_4878EC, HIDWORD(qword_4878EC), unk_4878F4);
    }
    if ( dword_46DC04 == 2 )
    {
LABEL_7:
      v2[13] = 1;
      return result;
    }
    if ( !v2[12] )
    {
      if ( !v2[7] )
        goto LABEL_7;
      return sub_231F34(qword_4878EC, HIDWORD(qword_4878EC), unk_4878F4);
    }
    return sub_1E3340(result);
  }
  return result;
}
