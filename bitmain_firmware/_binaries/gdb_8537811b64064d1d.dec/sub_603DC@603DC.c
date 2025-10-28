int __fastcall sub_603DC(_DWORD *a1, int a2)
{
  int v4; // r5
  int v5; // r5
  int v6; // r5
  int v7; // r5
  char *v8; // r5
  int v9; // r0
  int result; // r0
  int v11; // r0

  a1[9] = *(_DWORD *)sub_242FB4(a1);
  v4 = sub_98394(44);
  sub_60048(v4, a1[9], (int)"~", 34);
  a1[4] = v4;
  v5 = sub_98394(44);
  sub_60048(v5, a1[9], (int)&unk_35AFB8, 34);
  a1[5] = v5;
  a1[6] = v5;
  v6 = sub_98394(44);
  sub_60048(v6, a1[9], (int)"@", 34);
  a1[7] = v6;
  v7 = sub_98394(44);
  sub_60048(v7, a1[9], (int)&word_3FDE4C, 0);
  a1[8] = v7;
  v8 = (char *)sub_191760(a1);
  if ( !strcmp(v8, "mi") )
    goto LABEL_7;
  if ( !strcmp(v8, "mi1") )
  {
    v9 = 1;
    goto LABEL_4;
  }
  if ( !strcmp(v8, "mi2") )
  {
LABEL_7:
    v9 = 2;
  }
  else
  {
    if ( strcmp(v8, "mi3") )
    {
      sub_94728("mi/mi-interp.c", 146, "%s: %s", "virtual void mi_interp::init(bool)", "unhandled MI version");
      sub_33AC2C(v8);
      sub_339024(v11);
    }
    v9 = 3;
  }
LABEL_4:
  a1[11] = sub_69260(v9);
  result = sub_F0204(a1[4]);
  a1[12] = result;
  if ( a2 )
    return sub_183B60(sub_60EA8, a1);
  return result;
}
