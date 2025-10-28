int __fastcall sub_17A868(int a1)
{
  int v1; // r0
  int v2; // r4
  void *ptr; // [sp+4h] [bp-1Ch] BYREF
  void *v5; // [sp+8h] [bp-18h] BYREF
  char v6; // [sp+10h] [bp-10h] BYREF

  sub_17A774(&v5, a1);
  sub_1C42D0(&ptr, v5);
  v1 = sub_14CD8C((int *)ptr);
  v2 = sub_26BC98(v1);
  if ( ptr )
    free(ptr);
  if ( v5 != &v6 )
    sub_339E8C(v5);
  return v2;
}
