int __fastcall sub_413C0(int a1, void *(*a2)(void *))
{
  int v5; // [sp+Ch] [bp-8h]

  pthread_attr_init((pthread_attr_t *)(a1 + 8));
  v5 = pthread_create((pthread_t *)(a1 + 4), (const pthread_attr_t *)(a1 + 8), a2, (void *)a1);
  pthread_attr_destroy((pthread_attr_t *)(a1 + 8));
  return v5;
}
