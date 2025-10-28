int __fastcall sub_241698(const char *a1)
{
  int v1; // r4
  int *v2; // r0
  char *v4; // [sp+Ch] [bp-4h] BYREF

  v4 = (char *)a1;
  if ( a1 && (a1 = (const char *)sub_5B274((const char **)&v4, "-gid", 4u)) != 0 )
  {
    v1 = 1;
    a1 = (const char *)sub_93634(v4);
    v4 = (char *)a1;
  }
  else
  {
    v1 = 0;
  }
  v2 = (int *)sub_243004(a1);
  return sub_2409C4(*v2, v4, 0, -1, v1);
}
