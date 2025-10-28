void ui_uninit()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0

  if ( dword_C25EB8 )
  {
    dword_C25EBC = 0;
    pthread_join(dword_C25EC0, 0);
    delete_c_map((void ***)dword_C25EB4);
    pthread_mutex_destroy(&stru_C25E9C);
    v0 = sub_204844(0x100u);
    gpio_unreg_callback(v0, 2115900);
    v1 = sub_204844(0x101u);
    gpio_unreg_callback(v1, 2115900);
    v2 = sub_204844(1u);
    gpio_unexport(v2);
    v3 = sub_204844(2u);
    gpio_unexport(v3);
    v4 = sub_204844(0x100u);
    gpio_unexport(v4);
    v5 = sub_204844(0x101u);
    gpio_unexport(v5);
    gpio_uninit();
    dword_C25EB8 = 0;
  }
}
