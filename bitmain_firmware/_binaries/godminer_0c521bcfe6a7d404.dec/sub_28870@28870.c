// positive sp value has been detected, the output may be wrong!
void __fastcall sub_28870(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  int v13; // r4
  int v14; // r5
  _DWORD *v15; // r6
  _DWORD *v16; // r7
  double *v17; // r8
  double *v18; // r9
  int v19; // r11
  double v20; // d8
  double v21; // d9
  double v22; // d10
  double v23; // d11
  double v24; // d13
  double v25; // r0
  double v26; // d14
  double v27; // d8
  double v28; // d14
  __int64 v29; // r0
  bool v30; // cc
  __int64 v31; // r0
  int v32; // r0
  double v33; // d7
  __int64 v34; // r0
  int v35; // r0
  __int64 v36; // r0
  int v37; // r0
  __int64 v38; // r0
  int v39; // r0
  __int64 v40; // r0
  int v41; // r0
  int v42; // r0
  __int64 v43; // r0
  int v44; // r0
  __int64 v45; // r0
  int v46; // r0
  __int64 v47; // r0
  int v48; // r0
  int v49; // r0
  int v50; // r0
  double v51; // r0
  __int64 v52; // r0
  unsigned int v53; // r3
  double v54; // d7
  double v55; // d6
  bool v56; // cc
  double v57; // d7
  __int64 v58; // r0
  int v59; // r0
  int v60; // r0
  double v61; // d7
  __int64 v62; // r0
  bool v63; // cc
  int *v64; // r0
  bool v65; // cc
  double v66; // d10
  double v67; // r0
  __int64 v68; // r0
  __int64 v69; // r0
  int v70; // r0
  __int64 v71; // r0
  int v72; // r0
  __int64 v73; // [sp-1124h] [bp-1124h]
  __int64 v74; // [sp-111Ch] [bp-111Ch]
  _DWORD *v75; // [sp-1110h] [bp-1110h]
  double v76; // [sp-110Ch] [bp-110Ch]
  int v77; // [sp-10FCh] [bp-10FCh] BYREF
  int v78; // [sp-10F0h] [bp-10F0h] BYREF
  int v79; // [sp-10E4h] [bp-10E4h] BYREF
  int v80; // [sp-10C4h] [bp-10C4h] BYREF
  _BYTE v81[32]; // [sp-1084h] [bp-1084h] BYREF
  _QWORD v82[524]; // [sp-1064h] [bp-1064h] BYREF

  format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v14 + 72) + 16), &v77, &v78);
  v74 = v82[10];
  get_miner_elapsed_time();
  v25 = COERCE_DOUBLE(sub_12E62C(*v15, v15[1]));
  v76 = v22 * v23;
  v26 = v25;
  if ( v23 != 0.0 )
    v26 = v25 / v23;
  v27 = v20 * v23;
  v28 = v26 * 60.0;
  get_total_nonce_rate();
  get_total_accept_rate();
  v29 = sub_12E980(LODWORD(v23), HIDWORD(v23));
  json_integer(v29, HIDWORD(v29));
  ((void (__fastcall *)(int, const char *))json_object_set_new)(v13, "Elapsed");
  v30 = *v16 > 0xAu;
  if ( *v16 != 10 )
    v30 = (unsigned int)(*v16 - 6) > 1;
  if ( v30 )
  {
    v69 = sub_12E980(COERCE_UNSIGNED_INT64(v24 * v23 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v24 * v23 * 100.0)));
    v70 = sub_12E62C(v69, HIDWORD(v69));
    json_real(v70);
    ((void (__fastcall *)(int, const char *))json_object_set_new)(v13, "GHS 5s");
    v71 = sub_12E980(COERCE_UNSIGNED_INT64(v27 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v27 * 100.0)));
    v72 = sub_12E62C(v71, HIDWORD(v71));
    json_real(v72);
    ((void (__fastcall *)(int, const char *))json_object_set_new)(v13, "GHS av");
    v36 = sub_12E980(COERCE_UNSIGNED_INT64(v76 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v76 * 100.0)));
  }
  else
  {
    v31 = sub_12E980(COERCE_UNSIGNED_INT64(v21 * v23 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v21 * v23 * 100.0)));
    v32 = sub_12E62C(v31, HIDWORD(v31));
    json_real(v32);
    ((void (__fastcall *)(int, const char *))json_object_set_new)(v13, "GHS 5s");
    v33 = *(float *)&v23;
    v34 = sub_12E980(COERCE_UNSIGNED_INT64(v33 * v27 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v33 * v27 * 100.0)));
    v35 = sub_12E62C(v34, HIDWORD(v34));
    json_real(v35);
    ((void (__fastcall *)(int, const char *))json_object_set_new)(v13, "GHS av");
    v36 = sub_12E980(COERCE_UNSIGNED_INT64(v33 * v76 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v33 * v76 * 100.0)));
  }
  v37 = sub_12E62C(v36, HIDWORD(v36));
  json_real(v37);
  ((void (__fastcall *)(int, const char *))json_object_set_new)(v13, "GHS 30m");
  json_integer(dword_1731B8, 0);
  ((void (__fastcall *)(int, const char *))json_object_set_new)(v13, "Found Blocks");
  json_integer(total_getworks, dword_18E3EC);
  ((void (__fastcall *)(int, const char *))json_object_set_new)(v13, "Getwork");
  json_integer(*v75, v75[1]);
  ((void (__fastcall *)(int, const char *))json_object_set_new)(v13, "Accepted");
  json_integer(total_rejected, dword_18E404);
  ((void (__fastcall *)(int, const char *))json_object_set_new)(v13, "Rejected");
  json_integer(v74, HIDWORD(v74));
  ((void (__fastcall *)(int, const char *))json_object_set_new)(v13, "Hardware Errors");
  v38 = sub_12E980(COERCE_UNSIGNED_INT64(v28 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v28 * 100.0)));
  v39 = sub_12E62C(v38, HIDWORD(v38));
  json_real(v39);
  ((void (__fastcall *)(int, const char *))json_object_set_new)(v13, "Utility");
  json_integer(total_discarded, dword_18E3C4);
  ((void (__fastcall *)(int, const char *))json_object_set_new)(v13, "Discarded");
  json_integer(total_stale, dword_18E3B4);
  ((void (__fastcall *)(int, const char *))json_object_set_new)(v13, "Stale");
  json_integer(total_go, 0);
  ((void (__fastcall *)(int, const char *))json_object_set_new)(v13, "Get Failures");
  json_integer(local_work, 0);
  ((void (__fastcall *)(int, const char *))json_object_set_new)(v13, "Local Work");
  json_integer(total_ro, 0);
  ((void (__fastcall *)(int, const char *))json_object_set_new)(v13, "Remote Failures");
  json_integer(new_blocks, 0);
  ((void (__fastcall *)(int, const char *))json_object_set_new)(v13, "Network Blocks");
  v40 = sub_12E980(COERCE_UNSIGNED_INT64(dbl_1731C0 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(dbl_1731C0 * 100.0)));
  v41 = sub_12E62C(v40, HIDWORD(v40));
  json_real(v41);
  v42 = ((int (__fastcall *)(int, const char *))json_object_set_new)(v13, "Total MH");
  json_real(v42);
  ((void (__fastcall *)(int, const char *))json_object_set_new)(v13, "Work Utility");
  v43 = sub_12E980(COERCE_UNSIGNED_INT64(*v18 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(*v18 * 100.0)));
  v44 = sub_12E62C(v43, HIDWORD(v43));
  json_real(v44);
  ((void (__fastcall *)(int, const char *))json_object_set_new)(v13, "Difficulty Accepted");
  v45 = sub_12E980(
          COERCE_UNSIGNED_INT64(total_diff_rejected * 100.0),
          HIDWORD(COERCE_UNSIGNED_INT64(total_diff_rejected * 100.0)));
  v46 = sub_12E62C(v45, HIDWORD(v45));
  json_real(v46);
  ((void (__fastcall *)(int, const char *))json_object_set_new)(v13, "Difficulty Rejected");
  v47 = sub_12E980(COERCE_UNSIGNED_INT64(*v17 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(*v17 * 100.0)));
  v48 = sub_12E62C(v47, HIDWORD(v47));
  json_real(v48);
  ((void (__fastcall *)(int, const char *))json_object_set_new)(v13, "Difficulty Stale");
  json_integer(dword_1731C8, dword_1731CC);
  ((void (__fastcall *)(int, const char *))json_object_set_new)(v13, "Best Share");
  v49 = v74;
  v73 = v74 + total_diff1;
  if ( v74 + total_diff1 )
  {
    v66 = COERCE_DOUBLE(
            ((__int64 (__fastcall *)(_DWORD, _DWORD, int, _DWORD))sub_12E61C)(
              v74,
              HIDWORD(v74),
              (int)v74 + (int)total_diff1,
              (v74 + total_diff1) | ((unsigned __int64)(v74 + total_diff1) >> 32)));
    v67 = ((double (__fastcall *)(_DWORD, _DWORD))sub_12E61C)(v73, HIDWORD(v73));
    v68 = sub_12E980(COERCE_UNSIGNED_INT64(v66 / v67 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v66 / v67 * 100.0)));
    v49 = sub_12E62C(v68, HIDWORD(v68));
  }
  json_real(v49);
  ((void (__fastcall *)(int, const char *))json_object_set_new)(v13, "Device Hardware%");
  v50 = total_diff1;
  if ( total_diff1 )
  {
    v51 = ((double (__fastcall *)(_DWORD, _DWORD))sub_12E62C)(total_diff1, HIDWORD(total_diff1));
    v52 = sub_12E980(
            COERCE_UNSIGNED_INT64(total_diff_rejected / v51 * 100.0),
            HIDWORD(COERCE_UNSIGNED_INT64(total_diff_rejected / v51 * 100.0)));
    v50 = sub_12E62C(v52, HIDWORD(v52));
  }
  json_real(v50);
  ((void (__fastcall *)(int, const char *))json_object_set_new)(v13, "Device Rejected%");
  v53 = *v16 - 9;
  v54 = total_diff_rejected + *v18 + *v17;
  if ( v54 == 0.0 )
    v55 = 0.0;
  else
    v55 = total_diff_rejected / v54;
  v56 = v53 > 1;
  if ( v53 > 1 )
    v56 = (unsigned int)(*v16 - 6) > 1;
  if ( !v56 )
  {
    v57 = (float)(1.0 - *(float *)&v23);
    if ( v57 < v55 )
      v55 = v55 - v57;
  }
  v58 = sub_12E980(COERCE_UNSIGNED_INT64(v55 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v55 * 100.0)));
  v59 = sub_12E62C(v58, HIDWORD(v58));
  json_real(v59);
  v60 = ((int (__fastcall *)(int, const char *))json_object_set_new)(v13, "Pool Rejected%");
  v61 = *v18 + total_diff_rejected + *v17;
  if ( v61 != 0.0 )
  {
    v62 = sub_12E980(COERCE_UNSIGNED_INT64(*v17 / v61 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(*v17 / v61 * 100.0)));
    v60 = sub_12E62C(v62, HIDWORD(v62));
  }
  json_real(v60);
  ((void (__fastcall *)(int, const char *))json_object_set_new)(v13, "Pool Stale%");
  json_integer(last_getwork, last_getwork >> 31);
  ((void (__fastcall *)(int, const char *))json_object_set_new)(v13, "Last getwork");
  v63 = *v16 > 0xAu;
  if ( *v16 != 10 )
    v63 = (unsigned int)(*v16 - 6) > 1;
  if ( v63 )
    v64 = &v79;
  else
    v64 = &v80;
  json_string(v64);
  ((void (__fastcall *)(int, const char *))json_object_set_new)(v13, "RT HASHRATE");
  v65 = *v16 > 0xAu;
  if ( *v16 != 10 )
    v65 = (unsigned int)(*v16 - 6) > 1;
  if ( !v65 )
    format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v14 + 72) + 16), v81);
  json_string(v81);
  ((void (__fastcall *)(int, const char *))json_object_set_new)(v13, "AV HASHRATE");
  json_string(v82);
  ((void (__fastcall *)(int, const char *))json_object_set_new)(v13, "THEORY HASHRATE");
  ((void (__fastcall *)(int))json_array_append_new)(v13);
  ((void (__fastcall *)(int, const char *))json_object_set_new)(v19, "SUMMARY");
  json_integer(1, 0);
  ((void (__fastcall *)(int, char *))json_object_set_new)(v19, "id");
  __asm { POP             {R4-R11,PC} }
}
