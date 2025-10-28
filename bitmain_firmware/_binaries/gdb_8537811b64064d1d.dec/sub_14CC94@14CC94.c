int __fastcall sub_14CC94(int a1)
{
  int v1; // r4
  void *ptr; // [sp+0h] [bp-8h] BYREF
  int v4; // [sp+4h] [bp-4h] BYREF

  sub_1C42D0(&ptr, a1);
  v4 = 0;
  v1 = sub_14CA14(0, (int *)ptr, &v4, 0);
  if ( ptr )
    free(ptr);
  return v1;
}
