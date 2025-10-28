void __fastcall sub_64954(int a1, _DWORD *a2, int a3)
{
  int *v5; // r0
  bool v6; // zf
  int v7; // r4
  int v8; // r5
  void *ptr; // [sp+Ch] [bp-70h] BYREF
  _DWORD v10[3]; // [sp+10h] [bp-6Ch] BYREF
  char v11; // [sp+1Ch] [bp-60h] BYREF
  _BYTE v12[52]; // [sp+2Ch] [bp-50h] BYREF
  int v13; // [sp+60h] [bp-1Ch]

  v5 = (int *)sub_243004(a1);
  v6 = a3 == 1;
  v7 = *v5;
  if ( !v6 )
    sub_94708("-data-evaluate-expression: Usage: -data-evaluate-expression expression");
  sub_1C42D0(&ptr, *a2);
  v8 = sub_14CD64(ptr);
  sub_256788(v10);
  v10[1] = &v11;
  v10[0] = &off_3F294C;
  v10[2] = 0;
  v11 = 0;
  sub_266618(v12);
  v13 = 0;
  sub_266BEC(v8, v10, 0, v12, off_46D5A4[0]);
  sub_257684(v7, "value", v10);
  sub_2564A0(v10);
  if ( ptr )
    free(ptr);
}
