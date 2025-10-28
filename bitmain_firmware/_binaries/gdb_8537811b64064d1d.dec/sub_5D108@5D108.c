void __fastcall sub_5D108(int a1, int *a2, int a3)
{
  int *v5; // r0
  int v6; // r5
  int v7; // r9
  int v8; // r1
  _DWORD *v9; // r4
  _DWORD *v10; // r8
  void *v11; // [sp+Ch] [bp-40h] BYREF
  _BYTE *v12; // [sp+10h] [bp-3Ch]
  void *v13; // [sp+18h] [bp-34h] BYREF
  int v14; // [sp+1Ch] [bp-30h]
  char v15[16]; // [sp+20h] [bp-2Ch] BYREF
  void *ptr; // [sp+30h] [bp-1Ch] BYREF
  int v17; // [sp+34h] [bp-18h]
  char v18[20]; // [sp+38h] [bp-14h] BYREF

  v5 = (int *)sub_243004(a1);
  v6 = *v5;
  v7 = sub_B8974(v5);
  if ( a3 )
  {
    if ( a3 != 1 )
      sub_94708("Usage: -info-ada-exceptions [REGEXP]");
    v8 = *a2;
  }
  else
  {
    v8 = 0;
  }
  sub_AF47C(&v11, v8);
  ptr = v18;
  strcpy(v18, "ada-exceptions");
  v17 = 14;
  sub_257074(v6, 2, (v12 - (_BYTE *)v11) >> 3, &ptr);
  if ( ptr != v18 )
    sub_339E8C(ptr);
  strcpy(v15, "name");
  strcpy(v18, "Name");
  ptr = v18;
  v13 = v15;
  v14 = 4;
  v17 = 4;
  sub_2571E0(v6, 1, -1, &v13, &ptr);
  if ( ptr != v18 )
    sub_339E8C(ptr);
  if ( v13 != v15 )
    sub_339E8C(v13);
  v13 = v15;
  strcpy(v15, "address");
  ptr = v18;
  strcpy(v18, "Address");
  v14 = 7;
  v17 = 7;
  sub_2571E0(v6, 1, -1, &v13, &ptr);
  if ( ptr != v18 )
    sub_339E8C(ptr);
  if ( v13 != v15 )
    sub_339E8C(v13);
  sub_257254(v6);
  v9 = v11;
  v10 = v12;
  if ( v12 != v11 )
  {
    do
    {
      sub_2578D4(v6, 0);
      sub_257610(v6, "name", *v9);
      sub_257658(v6, "address", v7, v9[1]);
      v9 += 2;
      sub_257374(v6, 0);
    }
    while ( v10 != v9 );
  }
  sub_257298(v6);
  if ( v11 )
    sub_339E8C(v11);
}
