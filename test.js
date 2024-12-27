
const usbDetection = require('./index.js');

usbDetection.startMonitoring();

// usbDetection.find().then(devices => {
// 	console.log(devices);
// 	usbDetection.stopMonitoring();
// });


usbDetection.on('add', (device) => {
	console.log(device);
});

usbDetection.on('remove', (device) => {
	console.log(device);
}); 