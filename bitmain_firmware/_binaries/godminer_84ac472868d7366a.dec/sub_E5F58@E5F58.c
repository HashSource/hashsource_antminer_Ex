int __fastcall sub_E5F58(int a1, int a2, int a3)
{
  int v3; // r8
  int v4; // r4
  int v7; // r5
  int v8; // r0
  int v10; // r3
  int v11; // r12
  int v13; // t1

  v3 = a2;
  if ( !a2 )
    return 0;
  v7 = a3 - 4;
  v4 = 0;
  while ( 1 )
  {
    *(_DWORD *)(v7 + 4) = a2;
    v7 += 4;
    v8 = cuckoo_hash_operator(a1);
    a2 = v8;
    ++v4;
    if ( !v8 )
      break;
    if ( v4 == 256 )
    {
      v10 = a3 + 1024;
      v11 = 255;
      do
      {
        v13 = *(_DWORD *)(v10 - 4);
        v10 -= 4;
        if ( v13 == v8 )
        {
          printf("illegal %4d-cycle from node %d\n", 256 - v11, v3);
          exit(0);
        }
      }
      while ( v11-- != 0 );
      v4 = 0;
      puts("\nWARNINIG: maximum path length exceeded");
      return v4;
    }
  }
  return v4;
}
