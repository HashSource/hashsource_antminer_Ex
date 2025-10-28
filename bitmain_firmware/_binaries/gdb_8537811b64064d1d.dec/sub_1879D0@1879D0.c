_DWORD *__fastcall sub_1879D0(_DWORD *result)
{
  _DWORD *v1; // r4
  _DWORD *v2; // r0
  _DWORD *v3; // r0

  if ( (_DWORD *)dword_46D598 != result )
  {
    dword_46D598 = (int)result;
    v1 = result;
    if ( dword_487930 )
    {
      v3 = (_DWORD *)sub_242FF0(result);
      sub_2594D8(*v3, "infrun: infrun_async(%d)\n", v1);
      v2 = (_DWORD *)dword_487974;
      if ( !v1 )
        return sub_1532F0(v2);
    }
    else
    {
      v2 = (_DWORD *)dword_487974;
      if ( !v1 )
        return sub_1532F0(v2);
    }
    return sub_1532E4(v2);
  }
  return result;
}
