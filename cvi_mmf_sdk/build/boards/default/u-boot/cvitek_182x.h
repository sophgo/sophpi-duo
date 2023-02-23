/*
 *VO control GPIOs
 */
 #ifdef CONFIG_DISPLAY_CVITEK_MIPI
#define VO_GPIO_RESET_PORT		porte
#define VO_GPIO_RESET_INDEX		2
#define VO_GPIO_RESET_ACTIVE	GPIO_ACTIVE_LOW
#define VO_GPIO_PWM_PORT		porte
#define VO_GPIO_PWM_INDEX		0
#define VO_GPIO_PWM_ACTIVE		GPIO_ACTIVE_HIGH
#define VO_GPIO_POWER_CT_PORT	porte
#define VO_GPIO_POWER_CT_INDEX	1
#define VO_GPIO_POWER_CT_ACTIVE	GPIO_ACTIVE_HIGH
#elif defined(CONFIG_DISPLAY_CVITEK_LVDS)
#define VO_GPIO_PWM_PORT		porte
#define VO_GPIO_PWM_INDEX		2
#define VO_GPIO_PWM_ACTIVE		GPIO_ACTIVE_HIGH
#endif

