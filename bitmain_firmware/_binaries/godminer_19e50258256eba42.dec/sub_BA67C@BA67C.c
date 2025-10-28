FILE *sub_BA67C()
{
  FILE *result; // r0
  int v1; // [sp+10h] [bp-1044h] BYREF
  char ptr; // [sp+1013h] [bp-41h] BYREF
  FILE *stream; // [sp+1014h] [bp-40h]
  int i4; // [sp+1018h] [bp-3Ch]
  int i3; // [sp+101Ch] [bp-38h]
  int i2; // [sp+1020h] [bp-34h]
  int i1; // [sp+1024h] [bp-30h]
  int nn; // [sp+1028h] [bp-2Ch]
  int mm; // [sp+102Ch] [bp-28h]
  int kk; // [sp+1030h] [bp-24h]
  int jj; // [sp+1034h] [bp-20h]
  int ii; // [sp+1038h] [bp-1Ch]
  int k; // [sp+103Ch] [bp-18h]
  int j; // [sp+1040h] [bp-14h]
  int i; // [sp+1044h] [bp-10h]
  int m; // [sp+1048h] [bp-Ch]
  int n; // [sp+104Ch] [bp-8h]

  ptr = 100;
  result = fopen("/nvdata/level_new", "rb");
  stream = result;
  if ( result )
  {
    if ( fread(&ptr, 1u, 1u, stream) != 1 )
    {
      V_LOCK();
      logfmt_raw(&v1, 0x1000u, 0, "machine level get failed");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
        193,
        "init_target_freq_array_f",
        24,
        281,
        60,
        &v1);
    }
    result = (FILE *)fclose(stream);
  }
  switch ( ptr )
  {
    case 1:
      for ( i = 0; i <= 2; ++i )
      {
        for ( j = 0; j <= 5; ++j )
          target_freq_array_f[6 * i + j] = 535.0;
      }
      for ( k = 0; k <= 2; ++k )
      {
        target_freq_array_f[6 * k + 2] = 520.0;
        target_freq_array_f[6 * k + 3] = 520.0;
      }
      break;
    case 2:
      for ( m = 0; m <= 2; ++m )
      {
        for ( n = 0; n <= 5; ++n )
          target_freq_array_f[6 * m + n] = 535.0;
      }
      for ( ii = 0; ii <= 2; ++ii )
      {
        target_freq_array_f[6 * ii + 2] = 520.0;
        target_freq_array_f[6 * ii + 3] = 520.0;
      }
      break;
    case 3:
      for ( jj = 0; jj <= 2; ++jj )
      {
        for ( kk = 0; kk <= 5; ++kk )
          target_freq_array_f[6 * jj + kk] = 505.0;
      }
      for ( mm = 0; mm <= 2; ++mm )
      {
        target_freq_array_f[6 * mm + 2] = 490.0;
        target_freq_array_f[6 * mm + 3] = 490.0;
      }
      break;
    case 4:
      for ( nn = 0; nn <= 2; ++nn )
      {
        for ( i1 = 0; i1 <= 5; ++i1 )
          target_freq_array_f[6 * nn + i1] = 505.0;
      }
      for ( i2 = 0; i2 <= 2; ++i2 )
      {
        target_freq_array_f[6 * i2 + 2] = 490.0;
        target_freq_array_f[6 * i2 + 3] = 490.0;
      }
      break;
    default:
      for ( i3 = 0; i3 <= 2; ++i3 )
      {
        for ( i4 = 0; i4 <= 5; ++i4 )
          target_freq_array_f[6 * i3 + i4] = 400.0;
      }
      break;
  }
  return result;
}
