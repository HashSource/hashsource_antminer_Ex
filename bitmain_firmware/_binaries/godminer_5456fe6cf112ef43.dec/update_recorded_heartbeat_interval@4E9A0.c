int __fastcall update_recorded_heartbeat_interval(int a1)
{
  int v1; // r5
  char *v2; // r9
  _DWORD *v3; // r6
  struct timespec *v4; // r7
  int v5; // r3
  int v6; // r0
  unsigned int v7; // r2
  _DWORD *v8; // r12
  unsigned int v9; // lr
  unsigned int v10; // r1
  unsigned int v11; // t1
  bool v12; // cf

  v1 = 4 * a1;
  v2 = (char *)max_heartbeat_interval + a1;
  v3 = &max_heartbeat_interval[10 * a1];
  v4 = (struct timespec *)&max_heartbeat_interval[4 * a1 + 40];
  if ( !*((_BYTE *)&max_heartbeat_interval[56] + a1) )
  {
    clock_gettime(1, (struct timespec *)&max_heartbeat_interval[4 * a1 + 40]);
    v2[224] = 1;
  }
  clock_gettime(1, (struct timespec *)&max_heartbeat_interval[v1 + 42]);
  v5 = 0;
  v6 = 0;
  v7 = -1;
  v8 = v3 - 1;
  v9 = (1000 * (max_heartbeat_interval[v1 + 42] - max_heartbeat_interval[v1 + 40])
      + (max_heartbeat_interval[v1 + 43] - max_heartbeat_interval[v1 + 41]) / 1000000)
     / 0x3E8u;
  do
  {
    v11 = v8[1];
    ++v8;
    v10 = v11;
    v12 = v11 >= v7;
    if ( v11 < v7 )
      v6 = v5;
    ++v5;
    if ( !v12 )
      v7 = v10;
  }
  while ( v5 != 10 );
  if ( v7 < v9 )
    v3[v6] = v9;
  return clock_gettime(1, v4);
}
