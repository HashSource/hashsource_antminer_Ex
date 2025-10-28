int __fastcall get_miner_info(char *a1)
{
  int v1; // r4
  int v3; // r2
  char *v4; // r0
  const char *v5; // r8
  const char *v6; // r7
  int v7; // r5
  int v8; // r4
  int v9; // r0
  const char *v10; // r1
  int v11; // r4
  int v12; // r0
  const char *v13; // r1
  int v14; // r4
  int v15; // r0
  int v16; // r0
  int v17; // r2
  const char *v18; // r1
  int v20; // [sp+4h] [bp-4h] BYREF

  v1 = 0;
  v20 = 0;
  get_all_created_runtime(&v20);
  v3 = v20;
  if ( v20 > 0 )
  {
    LOWORD(v5) = -1088;
    LOWORD(v6) = -1068;
    v7 = 0;
    do
    {
      ++v7;
      HIWORD(v5) = (unsigned int)"ting" >> 16;
      v8 = sprintf(&a1[v1], v5, v7, 12) + v1;
      HIWORD(v6) = (unsigned int)"ived, exiting" >> 16;
      v9 = sprintf(&a1[v8], v6, v7, 0);
      LOWORD(v10) = -1044;
      v11 = v8 + v9;
      HIWORD(v10) = (unsigned int)"received, exiting" >> 16;
      v12 = sprintf(&a1[v11], v10, v7, 0);
      LOWORD(v13) = -1020;
      v14 = v11 + v12;
      HIWORD(v13) = (unsigned int)"EGV received, exiting" >> 16;
      v15 = sprintf(&a1[v14], v13, v7, 0);
      v3 = v20;
      v1 = v14 + v15;
    }
    while ( v7 < v20 );
    v4 = &a1[v1];
  }
  else
  {
    v4 = a1;
  }
  v16 = sprintf(v4, "chainnum=%d;", v3);
  LOWORD(v17) = 20704;
  LOWORD(v18) = -984;
  HIWORD(v17) = (unsigned int)&unk_163FB8 >> 16;
  HIWORD(v18) = (unsigned int)"ived, reload log" >> 16;
  return sprintf(&a1[v16 + v1], v18, v17);
}
