/**
 * \file
 *
 * \brief Application Configuration
 *
 * Copyright (c) 2011-2018 Microchip Technology Inc. and its subsidiaries.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Subject to your compliance with these terms, you may use Microchip
 * software and any derivatives exclusively with Microchip products.
 * It is your responsibility to comply with third party license terms applicable
 * to your use of third party software (including open source software) that
 * may accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES,
 * WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE,
 * INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY,
 * AND FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT WILL MICROCHIP BE
 * LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE
 * SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS BEEN ADVISED OF THE
 * POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY
 * RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
 * THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * \asf_license_stop
 *
 */
/*
 * Support and FAQ: visit <a href="https://www.microchip.com/support/">Microchip Support</a>
 */
#ifndef CONF_EXAMPLE_H
#define CONF_EXAMPLE_H

/**
 * \name ADCIFB channel configuration
 */
/*! @{ */
/* Connection of the battery voltage sensor */

#define EXAMPLE_ADCIFB_PIN           AT32UC3L_EK_VBAT_PIN
#define EXAMPLE_ADCIFB_FUNCTION      AT32UC3L_EK_VBAT_FUNCTION
#define EXAMPLE_ADCIFB_CHANNEL       AT32UC3L_EK_VBAT_ADC_CHANNEL

/* Alternate - Accelerometer X Axis Connect input to PA16 -> J15.18 in UC3L_EK */

/*
 * #define EXAMPLE_ADCIFB_PIN           ADC_ACC_X_PIN
 * #define EXAMPLE_ADCIFB_FUNCTION      ADC_ACC_X_FUNCTION
 * #define EXAMPLE_ADCIFB_CHANNEL       ADC_ACC_X_CHANNEL_MASK
 */
/*! @} */
#endif /* CONF_EXAMPLE_H */
