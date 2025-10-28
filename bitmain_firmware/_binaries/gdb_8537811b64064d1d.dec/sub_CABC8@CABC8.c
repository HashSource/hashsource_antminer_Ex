int __fastcall sub_CABC8(_BYTE *a1, int a2, int (__fastcall *a3)(int, int, int))
{
  int result; // r0
  int v4; // r1
  int v5; // r2
  int v8; // [sp+Ch] [bp-20h]
  _BYTE v9[28]; // [sp+10h] [bp-1Ch] BYREF

  if ( !a1 || !*a1 )
    sub_51EC4("one or more breakpoint numbers");
  for ( result = sub_5AE1C((int)v9, (int)a1); !v9[0]; result = sub_CAB00(v8, v8, a2, a3) )
    v8 = sub_5AE5C((int)v9, v4, v5);
  return result;
}
