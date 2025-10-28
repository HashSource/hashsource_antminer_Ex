int __fastcall keep_sockalive(int a1)
{
  int v3; // [sp+10h] [bp-14h] BYREF
  int v4; // [sp+14h] [bp-10h] BYREF
  int optval; // [sp+18h] [bp-Ch] BYREF
  char v6; // [sp+1Fh] [bp-5h]

  optval = 1;
  v4 = 45;
  v3 = 30;
  v6 = 0;
  setsockopt(a1, 1, 9, &optval, 4u);
  if ( v6 != 1 )
    fcntl(a1, 2, 1);
  setsockopt(a1, 6, 1, &optval, 4u);
  setsockopt(a1, 6, 6, &optval, 4u);
  setsockopt(a1, 6, 4, &v4, 4u);
  return setsockopt(a1, 6, 5, &v3, 4u);
}
