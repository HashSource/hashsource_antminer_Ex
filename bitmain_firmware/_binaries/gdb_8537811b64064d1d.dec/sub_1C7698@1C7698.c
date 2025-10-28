void __fastcall sub_1C7698(const char *a1)
{
  char *v1; // r1
  int v2; // r4
  int v3; // r5
  int v4; // r6
  int v5; // r7
  int v6; // r0
  int *v7; // r0
  int v8; // r0
  _DWORD *v9; // r0
  char *v10; // [sp+4h] [bp-60h] BYREF
  void *ptr; // [sp+8h] [bp-5Ch] BYREF
  int v12; // [sp+Ch] [bp-58h] BYREF
  unsigned __int8 v13; // [sp+10h] [bp-54h]
  unsigned __int8 v14; // [sp+11h] [bp-53h]
  unsigned __int8 v15; // [sp+12h] [bp-52h]
  _BYTE v16[64]; // [sp+14h] [bp-50h] BYREF
  int v17; // [sp+54h] [bp-10h]

  v1 = (char *)a1;
  v10 = (char *)a1;
  if ( a1 )
  {
    if ( *a1 == 47 )
    {
      v10 = (char *)(a1 + 1);
      sub_1C5564((char *)&v12, (const char **)&v10, 0, 0);
      v4 = v13;
      v3 = v14;
      v2 = v15;
      sub_1C6D3C(v12, v13, v14, "output");
      v1 = v10;
    }
    else
    {
      v2 = 0;
      v3 = 0;
      v4 = 0;
    }
  }
  else
  {
    v2 = 0;
    v3 = 0;
    v4 = 0;
  }
  sub_1C42D0((char **)&ptr, v1);
  v5 = sub_14CD64((int *)ptr);
  sub_26BC98(v5);
  sub_B7950();
  v6 = sub_266650(v16, v4);
  v17 = v2;
  v7 = (int *)sub_242FB4(v6);
  sub_1C5800(v5, v3, (int)v16, *v7);
  sub_B79D0();
  v8 = sub_259B80("");
  v9 = (_DWORD *)sub_242FB4(v8);
  sub_256834(*v9);
  if ( ptr )
    free(ptr);
}
