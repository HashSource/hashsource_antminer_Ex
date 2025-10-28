void __fastcall sub_27DDB4(void *a1)
{
  _DWORD *v2; // r4
  const char *v3; // r0
  void *v4; // r0
  _DWORD *v5; // r0
  int *v6; // r0
  int v7; // r0

  if ( *(_DWORD *)a1 )
  {
    **(_DWORD **)a1 = 1;
    if ( (unsigned int)(*((_DWORD *)a1 + 2) - 3) <= 1 )
    {
      v5 = sub_1700E8(*((_DWORD **)a1 + 4));
      v6 = sub_26DCC4(v5);
      v7 = sub_262134((int)v6);
      sub_277AD8(v7, *((unsigned __int8 **)a1 + 3));
    }
  }
  v2 = *(_DWORD **)(dword_487D2C + 36);
  if ( v2 )
  {
    while ( 1 )
    {
      if ( (v2[3] & 8) == 0 )
      {
        v3 = (const char *)sub_1B87D0((int)v2);
        if ( !strcmp(v3, (const char *)a1 + 28) )
          break;
      }
      v2 = (_DWORD *)*v2;
      if ( !v2 )
        goto LABEL_10;
    }
    ((void (__fastcall *)(_DWORD *))loc_1B7628)(v2);
    sub_33AC2C(v2);
    sub_2131B0(0);
  }
LABEL_10:
  unlink(*((const char **)a1 + 1));
  v4 = (void *)*((_DWORD *)a1 + 1);
  if ( v4 )
    free(v4);
  sub_27D02C(*((_DWORD *)a1 + 6));
  unlink((const char *)a1 + 28);
  free(a1);
}
