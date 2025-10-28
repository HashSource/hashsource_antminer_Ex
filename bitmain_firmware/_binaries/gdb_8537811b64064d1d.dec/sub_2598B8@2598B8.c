void sub_2598B8()
{
  void *v0; // r7
  __int64 v1; // kr00_8
  int (*v2)(); // r1
  unsigned __int8 *v3; // r4
  int v4; // r3
  bool v5; // zf
  int v6; // t1
  bool v7; // zf
  int v8; // r0
  __int64 v9; // [sp+0h] [bp-90h] BYREF
  int v10; // [sp+8h] [bp-88h]
  int (**v11)(); // [sp+Ch] [bp-84h]
  int (*v12)(); // [sp+10h] [bp-80h]
  int v13; // [sp+14h] [bp-7Ch]
  _BYTE v14[58]; // [sp+18h] [bp-78h] BYREF
  char v15[62]; // [sp+52h] [bp-3Eh] BYREF

  v0 = sub_92564((int)nullsub_39, 0);
  sub_33B284(&v9);
  v1 = v9;
  if ( dword_48968C > 1 )
  {
    sub_259880(asc_3F3434);
    strcpy(v14, "---Type <return> to continue, or q <return> to quit---");
    if ( dword_48968C > 1 )
    {
      *(_DWORD *)&v14[54] = 1880758794;
      strcpy(v15, "rompt-for-continue\n");
    }
  }
  else
  {
    strcpy(v14, "---Type <return> to continue, or q <return> to quit---");
  }
  v2 = off_46D458;
  v11 = &off_46D458;
  off_46D458 = sub_153B08;
  v10 = dword_46DC04;
  v12 = v2;
  dword_48A9D0 = 0;
  dword_48A9D4 = 0;
  v13 = 0;
  sub_22F01C();
  sub_1541CC(dword_487668);
  if ( !*(_DWORD *)(dword_487668 + 68) )
    v13 = dword_487668;
  v3 = (unsigned __int8 *)sub_243CDC(v14);
  sub_92564(2458360, (int)v3);
  sub_33B284(&v9);
  qword_48A9C8 += v9 - v1;
  if ( dword_48968C > 1 )
    sub_259880(asc_3F34A0);
  if ( !v3 )
    goto LABEL_16;
  v4 = *v3;
  v5 = v4 == 9;
  if ( v4 != 9 )
    v5 = v4 == 32;
  if ( v5 )
  {
    do
    {
      v6 = *++v3;
      v4 = v6;
      v7 = v6 == 9;
      if ( v6 != 9 )
        v7 = v4 == 32;
    }
    while ( v7 );
  }
  if ( v4 == 113 )
  {
    v8 = sub_92FAC((int)"Quit");
    sub_259B5C(v8);
  }
  else
  {
LABEL_16:
    dword_48A9D0 = 0;
    dword_48A9D4 = 0;
    sub_243C5C();
    sub_92648(v0);
    if ( v13 )
      sub_1541E0(v13);
    if ( v11 )
      *v11 = v12;
    if ( v10 == 1 )
    {
      sub_22F070();
    }
    else if ( v10 )
    {
      if ( v10 == 2 )
        sub_22F01C();
    }
    else
    {
      sub_22EFA4();
    }
  }
}
