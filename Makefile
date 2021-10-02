app_dfu_src = $(addprefix apps/dfu/,\
  app.cpp \
  dfualert_controller.cpp \
)

apps_src += $(app_dfu_src)

i18n_files += $(call i18n_with_universal_for,dfu/base)
