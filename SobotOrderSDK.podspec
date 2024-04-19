Pod::Spec.new do |s|
s.name             = "SobotOrderSDK"

s.version          = "2.0.1"

s.summary          = "sobot order sdk"
s.description      = <<-DESC
智齿工单SDK 提供APP端接入工单功能的支持，仅需简单集成，就能使自己的APP获取完整的工单操作能力。
DESC
s.homepage         = "https://github.com/ZCSDK/SobotOrder"
# s.screenshots      = "www.example.com/screenshots_1", "www.example.com/screenshots_2"
s.license          = 'MIT'
s.author           = { 'zhangxy' => 'app_dev@sobot.com' }
s.source           = { :git => "https://github.com/ZCSDK/SobotOrder.git", :tag => s.version.to_s }
# s.social_media_url = 'https://twitter.com/NAME'

s.platform     = :ios, '9.0'
s.requires_arc = true

s.pod_target_xcconfig = { 'VALID_ARCHS' => 'x86_64 armv7 arm64' }

s.resources = 'SobotOrder.bundle'
s.ios.vendored_frameworks = 'SobotOrderSDK.framework'
s.dependency 'SobotCommon','2.2.0'


end