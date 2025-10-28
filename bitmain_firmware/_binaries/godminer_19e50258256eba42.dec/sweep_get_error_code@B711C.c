int __fastcall sweep_get_error_code(json_t *a1)
{
  char s[256]; // [sp+Ch] [bp-308h] BYREF
  _BYTE v4[4]; // [sp+10Ch] [bp-208h] BYREF
  time_t v5; // [sp+110h] [bp-204h]
  char v6; // [sp+114h] [bp-200h]
  time_t v7; // [sp+118h] [bp-1FCh]
  char v8; // [sp+11Ch] [bp-1F8h]
  time_t v9; // [sp+120h] [bp-1F4h]
  char v10; // [sp+2E4h] [bp-30h]
  time_t v11; // [sp+2E8h] [bp-2Ch]
  char v12; // [sp+2ECh] [bp-28h]
  time_t v13; // [sp+2F0h] [bp-24h]
  char v14; // [sp+2F4h] [bp-20h]
  time_t v15; // [sp+2F8h] [bp-1Ch]
  int v16; // [sp+2FCh] [bp-18h]
  int m; // [sp+300h] [bp-14h]
  int k; // [sp+304h] [bp-10h]
  int j; // [sp+308h] [bp-Ch]
  int i; // [sp+30Ch] [bp-8h]

  get_miner_6060info_status(v4);
  v16 = 0;
  pthread_mutex_lock(&miner_6060info_lock);
  if ( v4[0] )
    set_json_info_by_errorcode_and_time(a1, "P:1", v5);
  if ( v6 )
    set_json_info_by_errorcode_and_time(a1, "P:2", v7);
  if ( v8 )
    set_json_info_by_errorcode_and_time(a1, "J:6", v9);
  for ( i = 0; i <= 7; ++i )
  {
    if ( v4[8 * i + 24] )
    {
      snprintf(s, 0x100u, "F%d:1", i);
      set_json_info_by_errorcode_and_time(a1, s, *(&v5 + 2 * i + 6));
    }
  }
  for ( j = 0; j <= 15; ++j )
  {
    if ( v4[8 * j + 88] )
    {
      snprintf(s, 0x100u, "R%d:1", j);
      set_json_info_by_errorcode_and_time(a1, s, *(&v5 + 2 * j + 22));
    }
  }
  for ( k = 0; k <= 15; ++k )
  {
    if ( v4[8 * k + 216] )
    {
      snprintf(s, 0x100u, "J%d:1", k);
      set_json_info_by_errorcode_and_time(a1, s, *(&v5 + 2 * k + 54));
    }
  }
  for ( m = 0; m <= 15; ++m )
  {
    if ( v4[8 * m + 344] )
    {
      snprintf(s, 0x100u, "J%d:2", m);
      set_json_info_by_errorcode_and_time(a1, s, *(&v5 + 2 * m + 86));
    }
  }
  if ( v10 )
    set_json_info_by_errorcode_and_time(a1, "N:4", v11);
  if ( v12 )
    set_json_info_by_errorcode_and_time(a1, "M:1", v13);
  if ( v14 )
    set_json_info_by_errorcode_and_time(a1, "J:8", v15);
  return pthread_mutex_unlock(&miner_6060info_lock);
}
