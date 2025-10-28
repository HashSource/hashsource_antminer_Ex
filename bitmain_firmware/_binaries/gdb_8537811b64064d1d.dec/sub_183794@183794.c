int __fastcall sub_183794(int a1)
{
  int v1; // r0
  _DWORD *v2; // r4
  int v3; // r5
  _DWORD *v4; // r0

  v1 = sub_14CC28(a1);
  v2 = (_DWORD *)dword_487918;
  if ( !dword_487918 )
LABEL_10:
    sub_94708("Inferior ID %d not known.", v1);
  while ( v1 != v2[2] )
  {
    v2 = (_DWORD *)v2[1];
    if ( !v2 )
      goto LABEL_10;
  }
  v3 = v2[3];
  if ( v3 )
  {
    if ( v3 != ps_getpid_0((int)&dword_4878EC) )
    {
      v4 = (_DWORD *)((int (__fastcall *)(_DWORD))loc_23E758)(v2[3]);
      if ( !v4 )
        sub_94708("Inferior has no threads.");
      sub_23FA18(v4[2], v4[3], v4[4]);
    }
    return sub_1BABDC(14);
  }
  else
  {
    ((void (__fastcall *)(_DWORD *, int))loc_1836C0)(v2, v1);
    sub_23FA18(dword_475848, dword_47584C, dword_475850);
    ((void (__fastcall *)(_DWORD))loc_1CD2B8)(v2[9]);
    return sub_1BABDC(2);
  }
}
